#!/bin/bash
ELKS_IMG=~/imgs/elks/elks30.img
ELKS_MNT=~/imgs/elks/hdd
sudo mount -o loop $ELKS_IMG $ELKS_MNT
sleep 3 # Horrible
sudo rm -rf $ELKS_MNT/root/lm--
sudo mkdir -p $ELKS_MNT/root/lm--/build/target
sudo cp Makefile.elks $ELKS_MNT/root/lm--/.
sudo cp -r src $ELKS_MNT/root/lm--/.
sudo cp -r build/target/elks $ELKS_MNT/root/lm--/build/target/native
sudo umount $ELKS_MNT
