#!/bin/bash

cd ~/suckless/dmenu && \
rm -rf config.h && \
make clean && \
make
