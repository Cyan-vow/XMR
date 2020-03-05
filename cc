#!/bin/sh
yum install -y epel-release
yum install wget git make cmake gcc gcc-c++ libstdc++-static libmicrohttpd-devel libuv-static screen unzip -y
git clone https://github.com/Cyan-vow/XMR.git
cd XMR
chmod 777 -R /root/XMR
nohup ./xmrig  &
