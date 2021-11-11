#!/bin/bash
[[ -z "$1" ]] && { echo "Project name is empty" ; exit 1; }
name=$1
echo rm -r "${name,}"
rm -r "${name,}"