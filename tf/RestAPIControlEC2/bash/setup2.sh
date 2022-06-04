#!/bin/bash
echo "======================"
echo "Running setup2.sh ... "
echo "======================"
sudo apt update
sudo apt -y upgrade
sudo apt -y dist-upgrade
sudo apt -y clean
sudo apt -y autoremove
sudo snap refresh

echo "======================"
sudo shutdown -r +0


