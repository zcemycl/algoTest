#include "ProdOfArrExceptSelf/prodOfArrExceptSelf.h"
#include "gtest/gtest.h"

using namespace std;

class prodOfArrExceptSelf_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<vector<int>,vector<int>>>{
};

TEST_P(prodOfArrExceptSelf_MultipleParamsTests, CheckAns){
    vector<int> nums = get<0>(GetParam());
    vector<int> expected = get<1>(GetParam());
    ASSERT_EQ(expected,prodOfArrExceptSelf::naive(nums));
};

INSTANTIATE_TEST_CASE_P(
    ProdOfArrExceptSelfTests,
    prodOfArrExceptSelf_MultipleParamsTests,
    ::testing::Values(
        make_tuple(vector<int>{1,2,3,4},vector<int>{24,12,8,6}),
        make_tuple(vector<int>{-1,1,0,-3,3},vector<int>{0,0,9,0,0})
    )
);
