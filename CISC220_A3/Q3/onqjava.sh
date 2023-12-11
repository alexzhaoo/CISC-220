#!/bin/bash

if [[ $# -eq 0 ]]; then
    echo "At least one fully qualified class name is required"
    exit 1
fi

ls -d */ > names.txt

while IFS= read -r elem; do
    cd "$elem"
    for i in "$@"; do
        dirname="${i%.*}"
        dir=$(echo "$dirname" | tr '.' '/')
        fname="${i##*.}"
        if ! [[ -d "$dir" ]]; then
            ./mkpkg.sh "$i"
            mv "$fname" "$dir"
        else
            mv "$fname" "$dir"
        fi
    done
    cd ..
done < "names.txt"
