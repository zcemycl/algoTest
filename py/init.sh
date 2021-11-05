#!/bin/bash
name=$1
echo solns/"${name,}"/
echo solns/"${name,}"/__init__.py
echo solns/"${name,}"/"${name,}".py

echo tests/test"${name^}"/
echo tests/test"${name^}"/__init__.py
echo tests/test"${name^}"/test"${name^}".py