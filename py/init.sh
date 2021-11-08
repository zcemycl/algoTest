#!/bin/bash
[[ -z "$1" ]] && { echo "Project name is empty" ; exit 1; }
name=$1
echo mkdir -p solns/"${name,}"/
mkdir -p solns/"${name,}"/
echo touch solns/"${name,}"/__init__.py
touch solns/"${name,}"/__init__.py
echo touch solns/"${name,}"/"${name,}".py
touch solns/"${name,}"/"${name,}".py

echo mkdir -p tests/test"${name^}"/
mkdir -p tests/test"${name^}"/
echo touch tests/test"${name^}"/__init__.py
touch tests/test"${name^}"/__init__.py
echo touch tests/test"${name^}"/test_"${name^}".py
touch tests/test"${name^}"/test_"${name^}".py