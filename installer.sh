#!/bin/bash
################################################################################
# Script for  installation of NutBoltu Heax Creator
# Author: H.R.Shadhin, NutBoltu 2015
#-------------------------------------------------------------------------------
#  
# This script will compile and install NutBoltu Heax Creator on
#-------------------------------------------------------------------------------
# USAGE:
#
#
# EXAMPLE:
# ./installer.sh 
#
################################################################################
qmake -config release 
make
sudo make install
echo "NutBoltu Hex Creator is installed on your system.Type in terminal 'hexcreator' to run the app."
