#include "BubbleSort/bubbleSort.h"
#include "gtest/gtest.h"

using namespace std;

class bubbleSort_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<vector<int>,vector<int>>>{
};

TEST_P(bubbleSort_MultipleParamsTests, CheckAns){
    vector<int> nums = get<0>(GetParam());
    vector<int> expected = get<1>(GetParam());
    ASSERT_EQ(expected,bubbleSort::naive(nums));
};

INSTANTIATE_TEST_CASE_P(
    BubbleSortTests,
    bubbleSort_MultipleParamsTests,
    ::testing::Values(
        make_tuple(vector<int>{4,5,1,8,10,11,0,7,9},
            vector<int>{0,1,4,5,7,8,9,10,11})
    )
);
