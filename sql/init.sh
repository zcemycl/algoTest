#!/bin/bash
[[ -z "$1" ]] && { echo "Project name is empty" ; exit 1; }
name=$1
echo mkdir -p "${name^}"
mkdir -p "${name^}"
echo touch "${name^}"/"${name,}".sql
touch "${name^}"/"${name,}".sql