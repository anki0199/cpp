#!/bin/bash

echo "enter your string a:"
read a
echo "enter your string b:"
read b
if [ "$a" = "$b" ];
then
echo "strings are equal"
else
echo "strings are not equal"
fi

