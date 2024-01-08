#!/bin/bash

echo "enter your string"
read str
if [[ "$str" =~ ^[[:upper:]]+$ ]]
then
echo " this is in upper case"
elif [[ "$str" =~ ^[[:lower:]]+$ ]]
then
echo "this is in lower case"
else
echo "this is in mixed case"
fi

