#!/bin/bash
[[ -z "$1" ]] && { echo "Project name is empty" ; exit 1; }
name=$1

echo rm -r solns/$name 
rm -r solns/$name 
echo rm -r tests/test"${name^}"
rm -r tests/test"${name^}"