#!/bin/bash
[[ -z "$1" ]] && { echo "Project name is empty" ; exit 1; }
name=$1
echo src/"${name^}"/
echo src/"${name^}"/"${name,}".cpp
echo src/"${name^}"/"${name,}".h
echo src/"${name^}"/CMakeLists.txt

echo tst/"${name^}"/
echo tst/"${name^}"/"${name,}"-test.cpp