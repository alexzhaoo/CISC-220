#!/usr/bin/env bash

x="$1"
classname=${x##*.}
pkg=${x%.*}
rpkg=${pkg/$classname/}

pack="${rpkg:+package}  ${rpkg:+$rpkg;}"

echo "$pack 

public class $classname{
}" > "$classname.java"
