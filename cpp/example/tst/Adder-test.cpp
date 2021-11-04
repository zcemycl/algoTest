#include "gtest/gtest.h"
#include <Adder/adder.h>

TEST(addTest,test2){
    EXPECT_EQ (add(1.2f,2.2f), 3.4f);
}