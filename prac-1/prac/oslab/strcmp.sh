#!/bin/bash

echo "please enter a string"
read input

if [[ $input == "[A-Z]*" ]]
then
echo "string is in uppercase"
elif [[ $input == "[a-z]*" ]]
then
echo "string is in lowercase"
else
echo "string is in mixed case"
fi

