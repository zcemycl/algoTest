#!/bin/bash
sudo apt update && sudo apt upgrade && sudo apt dist-upgrade && sudo apt clean && sudo apt autoremove && sudo snap refresh && pip3.9 install --upgrade pip;

cp .bash_aliases
cp .inputrc
sudo apt update
sudo apt -y upgrade
sudo apt -y dist-upgrade
sudo apt -y clean
sudo apt -y autoremove
sudo snap refresh
sudo apt -y install ubuntu-drivers-commonss
sudo ubuntu-drivers install
sudo reboot


sudo apt update
sudo apt -y upgrade
sudo apt -y dist-upgrade
sudo apt -y clean
sudo apt -y autoremove
sudo snap refresh
wget https://developer.download.nvidia.com/compute/cuda/repos/ubuntu2004/x86_64/cuda-ubuntu2004.pin
sudo mv cuda-ubuntu2004.pin /etc/apt/preferences.d/cuda-repository-pin-600
sudo apt-key adv --fetch-keys https://developer.download.nvidia.com/compute/cuda/repos/ubuntu2004/x86_64/3bf863cc.pub
sudo add-apt-repository "deb https://developer.download.nvidia.com/compute/cuda/repos/ubuntu2004/x86_64/ /"
sudo apt update
sudo apt -y upgrade
sudo apt -y dist-upgrade
sudo apt -y clean
sudo apt -y autoremove
sudo snap refresh
sudo reboot


sudo apt -y install cuda-11-7 cuda-drivers cuda-toolkit-11-7 libcudnn8 libcudnn8-dev libnvinfer-dev libnvinfer8 libnvinfer-plugin-dev libnvinfer-plugin8 cuda-nvcc-11-7 cuda-tools-11-7 cuda-nvcc-11-7 cuda-nsight-11-7 cuda-nsight-systems-11-7
sudo apt -y install python3.9-full python3.9-dev
curl https://bootstrap.pypa.io/get-pip.py > /tmp/get-pip.py
python3.9 /tmp/get-pip.py
echo 'export PATH=$PATH:/home/ubuntu/.local/bin' >> ~/.bashrc
pip3.9 install --upgrade pip
pip3.9 install tensorflow pipenv