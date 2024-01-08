#!/bin/bash

read -p "enter your number" n
if [ $n -lt 0 ]
then
echo "it is a negative number"
elif [ $n -gt 0 ]
then
echo "it is a positive number"
else
echo " it is zero"
fi
