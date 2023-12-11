#!/usr/bin/env bash

if [ ${#2} -eq 0 ]; then
    echo "Usage: pswap.sh file1 file2"
    exit 1
fi


x=$(gstat --format="%a" $1)
y=$(gstat --format="%a" $2)
x1=$(gstat --format="%A" $1)
y1=$(gstat --format="%A" $2)

chmod $x $2
chmod $y $1


echo "$x1 $x $1"
echo "$y1 $y $2"

