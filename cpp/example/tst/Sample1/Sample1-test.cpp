#include "gtest/gtest.h"
#include "Sample1/sample1.h"

TEST(sample1Test, test5){
    Solution1 s(1,3);
    int result = s.soln1();
    EXPECT_EQ (result,3);
}
