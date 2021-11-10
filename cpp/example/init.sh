#!/bin/bash
[[ -z "$1" ]] && { echo "Project name is empty" ; exit 1; }
name=$1
echo mkdir -p src/"${name^}"/
mkdir -p src/"${name^}"/
echo touch src/"${name^}"/"${name,}".cpp
touch src/"${name^}"/"${name,}".cpp
echo touch src/"${name^}"/"${name,}".h
touch src/"${name^}"/"${name,}".h
echo touch src/"${name^}"/CMakeLists.txt
touch src/"${name^}"/CMakeLists.txt

echo mkdir -p tst/"${name^}"/
mkdir -p tst/"${name^}"/
echo touch tst/"${name^}"/"${name^}"-test.cpp
touch tst/"${name^}"/"${name^}"-test.cpp

./write.sh $name