#!/bin/bash
echo "upper limit"
read ul
echo "pid of the current program $$"
for (( i=$ul; i>=1; i-- ))
do
echo $i
done

