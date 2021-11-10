#!/bin/bash
[[ -z "$1" ]] && { echo "Project name is empty" ; exit 1; }
name=$1

echo edit solns py file
exec `echo "" >> solns/${name,}/${name,}.py`
exec `echo "class Solution:" >> solns/${name,}/${name,}.py`
exec `echo "    @staticmethod" >> solns/${name,}/${name,}.py`
exec `echo "    def naive():" >> solns/${name,}/${name,}.py`
exec `echo "        pass" >> solns/${name,}/${name,}.py`

echo edit tests py file
exec `echo "" >> tests/test${name^}/test_${name^}.py`
exec `echo "import unittest" >> tests/test${name^}/test_${name^}.py`
exec `echo "from parameterized import parameterized as p" >> tests/test${name^}/test_${name^}.py`
exec `echo "from solns.${name,}.${name,} import *" >> tests/test${name^}/test_${name^}.py`
exec `echo "" >> tests/test${name^}/test_${name^}.py`
exec `echo "class UnitTest_${name^}(unittest.TestCase):" >> tests/test${name^}/test_${name^}.py`
exec `echo "    @p.expand([" >> tests/test${name^}/test_${name^}.py`
exec `echo "        []" >> tests/test${name^}/test_${name^}.py`
exec `echo "    ])" >> tests/test${name^}/test_${name^}.py`
exec `echo "    def test_naive(self):" >> tests/test${name^}/test_${name^}.py`
exec `echo "        pass" >> tests/test${name^}/test_${name^}.py`


