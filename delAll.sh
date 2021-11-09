#!/bin/bash
[[ -z "$1" ]] && { echo "Project name is empty" ; exit 1; }
name=$1
echo cd cpp/example/
cd cpp/example/
echo ./del.sh "${name^}"
./del.sh "${name^}"
echo cd ../..
cd ../..

echo cd cs/sample/
cd cs/sample/
echo ./del.sh $1
./del.sh $1
echo cd ../..
cd ../..

echo cd py/
cd py/
echo ./del.sh $1
./del.sh $1
echo cd ..
cd ..
