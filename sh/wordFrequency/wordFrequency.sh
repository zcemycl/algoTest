#!/bin/bash
sed -e  's/[^A-Za-z]/ /g' words.txt | tr 'A-Z' 'a-z' | tr ' ' '\n' | grep -v '^$'| sort | uniq -c | sort -rn