#!/bin/bash
[[ -z "$1" ]] && { echo "Project name is empty" ; exit 1; }
name=$1

echo rm -r src/$name 
rm -r src/$name 
echo rm -r tst/$name
rm -r tst/$name