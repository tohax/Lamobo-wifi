#!/bin/sh
echo 0 > /sys/class/leds/r_led/brightness
echo 0 > /sys/class/leds/g_led/brightness
killall -15 on.sh rsync wpa_supplicant mon.sh
modprobe -r 8188eu
echo -e  "\n PowerOFF `date +"%x"" ""%X"`\n" >> /etc/`hostname`_ready.txt
modprobe 8188eu rtw_power_mgnt=0 rtw_enusbss=0
if [ ! `pidof record_video` ]; then
 /etc/init.d/camera.sh &
fi
