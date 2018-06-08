#!/bin/sh
echo heartbeat > /sys/class/leds/g_led/trigger
Server=$(cat /etc/param | grep Server= | cut -d "=" -f 2)
echo `cat /etc/param | grep HOST= | cut -d "=" -f 2` > /etc/sysconfig/HOSTNAME
hostname -F /etc/sysconfig/HOSTNAME
chmod 600 /etc/.rsync

# Dropbear
if [ -d /etc/dropbear ]; then rm -rf /etc/dropbear; fi
mkdir -p /etc/dropbear
chmod 700 /etc/dropbear
dropbearkey -t rsa -f /etc/dropbear/dropbear_rsa_host_key

echo none > /sys/class/leds/g_led/trigger
echo 1 > /sys/class/leds/r_led/brightness
while [ ! -d /sys/class/net/wlan0 ]
do
echo "Connect power adapter"
sleep 5
done
echo 0 > /sys/class/leds/r_led/brightness
echo heartbeat > /sys/class/leds/g_led/trigger

# Wifi connect
if pgrep wpa_supplicant; then kill `pgrep wpa_supplicant`; fi
wpa_supplicant -B -iwlan0 -Dwext -c /etc/wpa_supplicant.conf
/etc/init.d/wifi.sh
dropbear -B
rdate -s time.nist.gov
hwclock --systohc
echo `date`
if [ ! -f /etc/mtab ]; then ln -s /proc/mounts /etc/mtab; fi
umount -l /mnt
yes | /usr/bin/mke2fs -t ext3 /dev/mmcblk0p1
mount /dev/mmcblk0p1 /mnt
rm -rf /mnt/*
echo "Setup finished" >> /etc/`hostname`_setup
rsync -avW --password-file=/etc/.rsync /etc/`hostname`_setup root@$Server::log/`date +%Y%m%d`/
rm -f /etc/`hostname`_setup
reboot
