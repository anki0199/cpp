#!/bin/bash

echo "Gross salary calculator..."

read -p "Enter Basic salary: " bsal

if [ $bsal -lt 1500 ]
then
gsal=$((bsal+((bsal/100)*10)+(bsal/100)*90))
else
gsal=$(((bsal+500)+(bsal/100)*98))
fi

echo "Gross salary: $gsal"
