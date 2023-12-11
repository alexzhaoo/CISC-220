#!/bin/bash

seq1='-'
x=$(printf %s "$1" | tr -d $seq1)
phonenum=$(printf %s "$x" | tr -d ' ')

echo $phonenum

if [[  $phonenum =~ ^[0-9]{10}$  ]]; then
    echo 1
else
    echo 0
fi


