#include "gtest/gtest.h"
#include "Sample/sample.h"

TEST(sampleTest, test3){
    int result = Solution::soln2(1,2);
    EXPECT_EQ (result,3);
}

TEST(sampleTest, test4){
    int result = Solution::soln2(100,22);
    EXPECT_EQ (result,122);
}