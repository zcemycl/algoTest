#!/bin/bash
[[ -z "$1" ]] && { echo "Project name is empty" ; exit 1; }
name=$1

echo rm -r Sample/"${name^}" 
rm -r Sample/"${name^}" 
echo rm -r Sample.Tests/"${name^}" 
rm -r Sample.Tests/"${name^}" 