#include "SortIntByNum1Bits/sortIntByNum1Bits.h"
#include "gtest/gtest.h"

using namespace std;

class sortIntByNum1Bits_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<vector<int>,vector<int>>>{
};

TEST_P(sortIntByNum1Bits_MultipleParamsTests, CheckAns){
    vector<int> arr = get<0>(GetParam());
    vector<int> expected = get<1>(GetParam());
    ASSERT_EQ(expected,sortIntByNum1Bits::naive(arr));
};

INSTANTIATE_TEST_CASE_P(
    SortIntByNum1BitsTests,
    sortIntByNum1Bits_MultipleParamsTests,
    ::testing::Values(
        make_tuple(vector<int>{1,2,4},vector<int>{1,2,4}),
        make_tuple(vector<int>{0,1,2,3,4,5,6,7,8},
                   vector<int>{0,1,2,4,8,3,5,6,7}),
        make_tuple(vector<int>{1000,1000},
                   vector<int>{1000,1000}),
        make_tuple(vector<int>{10,100,1000,10000},
                   vector<int>{10,100,10000,1000}),
        make_tuple(vector<int>{1024,512,256,128,64,32,16,8,4,2,1},
                   vector<int>{1,2,4,8,16,32,64,128,256,512,1024}),
        make_tuple(vector<int>{2,3,5,7,11,13,17,19},
                   vector<int>{2,3,5,17,7,11,13,19})
    )
);
