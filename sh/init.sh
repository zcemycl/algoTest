#!/bin/bash
[[ -z "$1" ]] && { echo "Project name is empty" ; exit 1; }
name=$1
echo mkdir -p "${name,}"
mkdir -p "${name,}"
echo touch "${name,}"/"${name,}".sh
touch "${name,}"/"${name,}".sh
echo chmod +x "${name,}"/"${name,}".sh
chmod +x "${name,}"/"${name,}".sh