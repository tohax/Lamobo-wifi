#!/bin/sh
if [ ! -d /sys/class/net/wlan0 ]; then /etc/init.d/off.sh; exit; fi
Server=$(cat /etc/param | grep Server= | cut -d "=" -f 2)
2>/dev/null killall camera.sh record_video wpa_supplicant
sleep 1
wpa_supplicant -B -iwlan0 -Dwext -c /etc/wpa_supplicant.conf 2>/dev/null
/etc/init.d/wifi.sh 1>/dev/null
if ping -c 2 $Server 1>/dev/null
then
/etc/init.d/mon.sh &
rdate -s time.nist.gov
hwclock --systohc
echo heartbeat > /sys/class/leds/r_led/trigger
sleep 1
echo heartbeat > /sys/class/leds/g_led/trigger
time=`date +%Y%m%d`
echo `date` > /etc/`hostname`_on.txt
find /mnt/ -name "*index" -exec rm {} \;
rsync -av --remove-source-files --password-file=/etc/.rsync /etc/`hostname`_on.txt root@$Server::log/$time/
rsync -av --remove-source-files --log-file=/etc/`hostname`_ready.txt --password-file=/etc/.rsync /mnt/ root@$Server::video/oneday/
rsync -av --remove-source-files --password-file=/etc/.rsync /etc/`hostname`_ready.txt root@$Server::log/$time/
find /mnt/[1-9]* -type d -delete 2>/dev/null
echo none > /sys/class/leds/g_led/trigger
echo none > /sys/class/leds/r_led/trigger
echo 0 > /sys/class/leds/g_led/brightness
echo 1 > /sys/class/leds/r_led/brightness
else
sleep 180
/sbin/reboot
fi
