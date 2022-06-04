#!/bin/bash
echo "======================"
echo "Running setup1.sh ... "
echo "======================"
sudo apt update && sudo apt -y upgrade && sudo apt -y dist-upgrade && sudo apt -y clean && sudo apt -y autoremove && sudo snap refresh && pip3.9 install --upgrade pip;

echo "======================"
sudo shutdown -r +0
