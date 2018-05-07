#!/bin/sh
echo 0 > /sys/class/leds/r_led/brightness
echo 0 > /sys/class/leds/g_led/brightness
killall -15 on.sh rsync wpa_supplicant mon.sh
echo -e  "\n PowerOFF `date +"%x"" ""%X"`\n" >> /etc/`hostname`_ready.txt
if [ ! `pidof record_video` ]; then
 /etc/init.d/camera.sh &
fi
