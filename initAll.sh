#!/bin/bash
[[ -z "$1" ]] && { echo "Project name is empty" ; exit 1; }
name=$1
echo cd cpp/example/
cd cpp/example/
echo ./init.sh $1
./init.sh $1
echo cd ../..
cd ../..

echo cd cs/sample/
cd cs/sample/
echo ./init.sh $1
./init.sh $1
echo cd ../..
cd ../..

echo cd py/
cd py/
echo ./init.sh $1
./init.sh $1
echo cd ..
cd ..

