#!/bin/bash

read -p "Enter a string: " input_str

if [[ $input_str =~ ^[[:alpha:]]+$ ]]; then
echo "input contains only alphabetic characters"
else
echo "input contains non-alphabetic characters"
fi
