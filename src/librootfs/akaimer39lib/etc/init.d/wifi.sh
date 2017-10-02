#!/bin/sh
IP=10.10.10.100
GW=10.10.10.2
AP=Avtobus
PASS=Acurarsx123

SSID=\"$AP\"
PSK=\"$PASS\"

if wpa_cli -iwlan0 list_networks | grep 0; then wpa_cli -iwlan0 remove_network 0; route del default gw $GW; fi
wpa_cli -iwlan0 add_network
wpa_cli -iwlan0 set_network 0 ssid $SSID
wpa_cli -iwlan0 set_network 0 key_mgmt WPA-PSK
wpa_cli -iwlan0 set_network 0 psk $PSK

wpa_cli -iwlan0 set_network 0 scan_ssid 1
wpa_cli -iwlan0 enable_network 0
wpa_cli -iwlan0 select_network 0

ifconfig wlan0 $IP netmask 255.255.255.0
route add default gw $GW
