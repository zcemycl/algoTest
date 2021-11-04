#include "gtest/gtest.h"
#include "Sample/sample.h"

TEST(sampleTest, test3){
    Solution s(1,3);
    int result = s.soln1();
    EXPECT_EQ (result,4);
}

TEST(sampleTest, test4){
    int result = Solution::soln2(100,22);
    EXPECT_EQ (result,122);
}