#!/bin/bash
name=$1
echo src/"${name^}"/
echo src/"${name^}"/"${name,}".cpp
echo src/"${name^}"/"${name,}".h
echo src/"${name^}"/CMakeLists.txt

echo tst/"${name^}"/
echo tst/"${name^}"/"${name,}"-test.cpp