#!/bin/bash
[[ -z "$1" ]] && { echo "Project name is empty" ; exit 1; }
name=$1
echo mkdir -p Sample/"${name^}"/
mkdir -p Sample/"${name^}"/
echo touch Sample/"${name^}"/"${name^}".cs
touch Sample/"${name^}"/"${name^}".cs

echo mkdir -p Sample.Tests/"${name^}"/
mkdir -p Sample.Tests/"${name^}"/
echo touch Sample.Tests/"${name^}"/test"${name^}".cs
touch Sample.Tests/"${name^}"/test"${name^}".cs

./write.sh $name