#!/bin/bash
read -p "enter str1: " str1
read -p "enter str2: " str2
if [ "${str1,,}" == "${str2,,}" ]
then
echo "eq"
else
echo "neq"
fi
