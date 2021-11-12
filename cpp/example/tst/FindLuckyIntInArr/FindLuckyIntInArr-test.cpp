#include "FindLuckyIntInArr/findLuckyIntInArr.h"
#include "gtest/gtest.h"

using namespace std;

class findLuckyIntInArr_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<vector<int>,int>>{
};

TEST_P(findLuckyIntInArr_MultipleParamsTests, CheckAns){
    vector<int> arr = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,findLuckyIntInArr::naive(arr));
};

INSTANTIATE_TEST_CASE_P(
    FindLuckyIntInArrTests,
    findLuckyIntInArr_MultipleParamsTests,
    ::testing::Values(
        make_tuple(vector<int>{2,2,3,4},2),
        make_tuple(vector<int>{1,2,2,3,3,3},3),
        make_tuple(vector<int>{2,2,2,3,4},-1),
        make_tuple(vector<int>{5},-1),
        make_tuple(vector<int>{4,4,4,2,3,3,2,3},3)
    )
);
