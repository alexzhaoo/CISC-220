#!/bin/bash

encode() {
    enc=()  
    n=${#arr[@]}  
    if (( n > 0 )); then
        start=0
        val=${arr[$start]}
        finished=false
        while ! $finished; do
            end=$(next $start)
            if (( end == -1 )); then
                end=$n
                finished=true
            fi
            count=$((end-start))
            enc+=($count) 
            enc+=($val)
            start=$end
            val=${arr[$start]}
        done
    fi
} 

next() {

beg=$1
curr=${arr[$beg]}
    for ((i= beg; i<${#arr[@]}; i++)); do
        if [[ ${arr[$i]} != "$curr" ]]; then
        echo $i
            return
        fi
    done
    echo -1
}

arr=("$@")
encode
echo "${enc[@]}"
