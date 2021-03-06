#!/bin/sh
Server=$(cat /etc/param | grep Server= | cut -d "=" -f 2)
killall -15 camera.sh record_video mon.sh sleep wpa_supplicant
#sync && echo 3 > /proc/sys/vm/drop_caches &&
sleep 1
wpa_supplicant -B -iwlan0 -Dwext -c /etc/wpa_supplicant.conf
/etc/init.d/wifi.sh
sleep 2
#if ping -c 2 $Server
#then
/etc/init.d/mon.sh &
rdate -s time.nist.gov
hwclock --systohc
echo heartbeat > /sys/class/leds/r_led/trigger
sleep 1
echo heartbeat > /sys/class/leds/g_led/trigger
find /mnt/ -name "*index" -exec rm {} \;
time=`date +%Y%m%d`
echo `date` > /etc/`hostname`_on.txt
rsync -avW --remove-source-files --password-file=/etc/.rsync /etc/`hostname`_on.txt root@$Server::log/$time/
rsync -avW --remove-source-files --log-file=/etc/`hostname`_ready.txt --password-file=/etc/.rsync /mnt/ root@$Server::video/oneday/
rsync -avW --remove-source-files --password-file=/etc/.rsync /etc/`hostname`_ready.txt root@$Server::log/$time/
find /mnt/[1-9]* -type d -delete 2>/dev/null
echo none > /sys/class/leds/g_led/trigger
echo none > /sys/class/leds/r_led/trigger
echo 0 > /sys/class/leds/g_led/brightness
echo 1 > /sys/class/leds/r_led/brightness
sync && echo 3 > /proc/sys/vm/drop_caches
#else
#sleep 180
#/sbin/reboot
#fi
