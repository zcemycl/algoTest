#!/bin/bash
[[ -z "$1" ]] && { echo "Project name is empty" ; exit 1; }
name=$1

echo edit src CMakeLists.txt
exec `echo "add_library(${name,} ${name,}.cpp ${name,}.h)" >> src/${name^}/CMakeLists.txt`

echo edit src h
exec `echo "#include <iostream>" >> src/${name^}/${name,}.h`
exec `echo "" >> src/${name^}/${name,}.h`
exec `echo "using namespace std;" >> src/${name^}/${name,}.h`
exec `echo "" >> src/${name^}/${name,}.h`
exec `echo "class ${name,}{" >> src/${name^}/${name,}.h`
exec `echo "    public:" >> src/${name^}/${name,}.h`
exec `echo "        static int naive(int n);" >> src/${name^}/${name,}.h`
exec `echo "};" >> src/${name^}/${name,}.h`

echo edit src cpp
exec `echo "#include \"${name,}.h\"" >> src/${name^}/${name,}.cpp`
exec `echo "" >> src/${name^}/${name,}.cpp`
exec `echo "int ${name,}::naive(int n){" >> src/${name^}/${name,}.cpp`
exec `echo "    return n;" >> src/${name^}/${name,}.cpp`
exec `echo "}" >> src/${name^}/${name,}.cpp`

echo edit tst cpp
exec `echo "#include \"${name^}/${name,}.h\"" >> tst/${name^}/${name^}-test.cpp`
exec `echo "#include \"gtest/gtest.h\"" >> tst/${name^}/${name^}-test.cpp`
exec `echo "" >> tst/${name^}/${name^}-test.cpp`
exec `echo "using namespace std;" >> tst/${name^}/${name^}-test.cpp`
exec `echo "" >> tst/${name^}/${name^}-test.cpp`
exec `echo "class ${name,}_MultipleParamsTests : " >> tst/${name^}/${name^}-test.cpp`
exec `echo "    public ::testing::TestWithParam<tuple<int,int>>{" >> tst/${name^}/${name^}-test.cpp`
exec `echo "};" >> tst/${name^}/${name^}-test.cpp`
exec `echo "" >> tst/${name^}/${name^}-test.cpp`
exec `echo "TEST_P(${name,}_MultipleParamsTests, CheckAns){" >> tst/${name^}/${name^}-test.cpp`
exec `echo "    int n = get<0>(GetParam());" >> tst/${name^}/${name^}-test.cpp`
exec `echo "    int expected = get<1>(GetParam());" >> tst/${name^}/${name^}-test.cpp`
exec `echo "    ASSERT_EQ(expected,${name,}::naive(n));" >> tst/${name^}/${name^}-test.cpp`
exec `echo "};" >> tst/${name^}/${name^}-test.cpp`
exec `echo "" >> tst/${name^}/${name^}-test.cpp`
exec `echo "INSTANTIATE_TEST_CASE_P(" >> tst/${name^}/${name^}-test.cpp`
exec `echo "    ${name^}Tests," >> tst/${name^}/${name^}-test.cpp`
exec `echo "    ${name,}_MultipleParamsTests," >> tst/${name^}/${name^}-test.cpp`
exec `echo "    ::testing::Values(" >> tst/${name^}/${name^}-test.cpp`
exec `echo "        make_tuple(0,0)" >> tst/${name^}/${name^}-test.cpp`
exec `echo "    )" >> tst/${name^}/${name^}-test.cpp`
exec `echo ");" >> tst/${name^}/${name^}-test.cpp`
