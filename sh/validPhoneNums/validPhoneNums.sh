#!/bin/bash
cat file.txt | awk '/^[0-9]{3}-[0-9]{3}-[0-9]{4}$|^\([0-9]{3}\) [0-9]{3}-[0-9]{4}$/{print $0}'

# https://medium.com/introduction-into-bash/bash-scripts-regular-expressions-7d1a0473a902