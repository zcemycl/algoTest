#include <vector>
#include <iostream>
#include "gtest/gtest.h"
#include "TwoSum/twoSum.h"

using namespace std;

TEST(twoSumTest, testnaive1){
    vector<int> inp {1,2,4};
    vector<int> out {1,2};
    int target = 6;
    vector<int> result = twoSum::naive(inp,target);
    EXPECT_EQ (result,out);
}
