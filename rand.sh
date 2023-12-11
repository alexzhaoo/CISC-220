#!/usr/bin/env bash

n1=$RANDOM
x1=$((n1 % 2))
y1=$((x1*2**0))

n2=$RANDOM
x2=$((n2 % 2))
y2=$((x2*2**1))

n3=$RANDOM
x3=$((n3 % 2))
y3=$((x3*2**2))

n4=$RANDOM
x4=$((n4 % 2))
y4=$((x4*2**3))

n5=$RANDOM
x5=$((n5 % 2))
y5=$((x5*2**4))

n6=$RANDOM
x6=$((n6 % 2))
y6=$((x6*2**5))

n7=$RANDOM
x7=$((n7 % 2))
y7=$((x7*2**6))

n8=$RANDOM
x8=$((n8 % 2))
y8=$((x8*2**7))

n=$((y1+y2+y3+y4+y5+y6+y7+y8))
echo "$n"