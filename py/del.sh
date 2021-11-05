#!/bin/bash
[[ -z "$1" ]] && { echo "Project name is empty" ; exit 1; }
name=$1

echo solns/$name 
echo tests/test"${name^}"