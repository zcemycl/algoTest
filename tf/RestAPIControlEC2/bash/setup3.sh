#!/bin/bash
echo "======================"
echo "Running setup3.sh ... "
echo "======================"
sudo apt -y install python3.9-full python3.9-dev
pip3.9 install --upgrade pip
pip3.9 install tensorflow pipenv

echo "======================"