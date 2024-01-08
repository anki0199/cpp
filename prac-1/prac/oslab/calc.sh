#!/bin/bash
#PS3="what operation"

read -p "what a" a
read -p "what b" b
select operation in + - ;
do
if [ "$operation" = "+" ];
then
echo "$a+$b"|bc
else
echo "$a-$b"|bc
fi 
break
done
