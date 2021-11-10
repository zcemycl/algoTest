#include "DuplicateZeros/duplicateZeros.h"
#include "gtest/gtest.h"

using namespace std;

class duplicateZeros_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<vector<int>,vector<int>>>{
};

TEST_P(duplicateZeros_MultipleParamsTests, CheckAns){
    vector<int> arr = get<0>(GetParam());
    vector<int> expected = get<1>(GetParam());
    duplicateZeros::naive(arr);
    ASSERT_EQ(expected,arr);
};

INSTANTIATE_TEST_CASE_P(
    DuplicateZerosTests,
    duplicateZeros_MultipleParamsTests,
    ::testing::Values(
        make_tuple(vector<int>{1,0,2,3,0,4,5,0},
            vector<int>{1,0,0,2,3,0,0,4}),
        make_tuple(vector<int>{1,2,3},
            vector<int>{1,2,3}),
        make_tuple(vector<int>{1,0,0,2,3,0,4,5,0},
            vector<int>{1,0,0,0,0,2,3,0,0}),
        make_tuple(vector<int>{},vector<int>{})
    )
);
