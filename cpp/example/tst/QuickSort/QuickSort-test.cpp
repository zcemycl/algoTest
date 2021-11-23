#include "QuickSort/quickSort.h"
#include "gtest/gtest.h"

using namespace std;

class quickSort_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,string>>{
};

TEST_P(quickSort_MultipleParamsTests, CheckAns){
    int expected = get<0>(GetParam());
    string mode = get<1>(GetParam());
    vector<int> nums = quickSort::loadtxt2arr();
    int count = 0; int* ptr = &count;
    quickSort::naive(nums,0,nums.size(),mode,ptr);
    ASSERT_EQ(expected,count);
    nums.clear();
    nums.shrink_to_fit();
};

INSTANTIATE_TEST_CASE_P(
    QuickSortTests,
    quickSort_MultipleParamsTests,
    ::testing::Values(
        make_tuple(162085,"first"),
        make_tuple(164123,"end"),
        make_tuple(138382,"med")
    )
);
