#!/bin/bash

if [ $# -ne 1 ]; then
    echo "Usage: $0 specfile" >&2
    exit 1
fi

specfile="$1"

if [ ! -f "$specfile" ] || [ ! -r "$specfile" ]; then
    echo "'$specfile' is missing or could not be read." >&2
    exit 2
fi


while read line; do
    if [[ -n "$line" && "$line" != "#"* ]]; then
        if [ -f "$line" ]; then
            continue
        fi
        if [ ! -e "$line" ]; then
            echo "$line missing" >&2

        fi
    fi
done < "$specfile"