#!/bin/bash
sudo cp /etc/dnsmasq.conf /etc/dnsmasq.conf.orig
sudo cp dnsmasq.conf.wlan2pceth /etc/dnsmasq.conf

sudo cp /etc/dhcpcd.conf /etc/dhcpcd.conf.orig
sudo cp dhcpcd.conf.wlan2pceth /etc/dhcpcd.conf

sudo cp /etc/sysctl.conf /etc/sysctl.conf.orig
sudo cp sysctl.conf.wlan2pceth /etc/sysctl.conf

sudo cp /etc/rc.local /etc/rc.local.orig
sudo cp rc.local.wlan2pceth /etc/rc.local

sudo reboot