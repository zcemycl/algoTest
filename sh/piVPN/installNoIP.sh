#!/bin/bash
cd /usr/local/src/
wget http://www.noip.com/client/linux/noip-duc-linux.tar.gz
tar xf noip-duc-linux.tar.gz
cd noip-2.1.9-1/
sudo make install
sudo cp noip2.service /etc/systemd/system/
sudo systemctl enable noip2
sudo systemctl start noip2
sudo apt install ufw
sudo ufw enable
sudo ufw allow 1194
sudo reboot