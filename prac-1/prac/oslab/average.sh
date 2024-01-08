#!/bin/bash

read -p "Enter marks in sub 1: " marks1
read -p "Enter marks in sub 2: " marks2
read -p "Enter marks in sub 3: " marks3

total=$(($marks1+$marks2+$marks3))

echo "Total marks: $total"

avg=$(echo "scale=4; $total/3"|bc)

echo "Average marks: $avg"
