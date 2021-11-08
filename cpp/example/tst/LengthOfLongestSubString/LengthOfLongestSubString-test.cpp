#include "gtest/gtest.h"
#include "LengthOfLongestSubString/lengthOfLongestSubString.h"

TEST(LengthOfLongestSubStringTest,test_empty){
    string s = "";
    int result = lengthOfLongestSubString::naive(s);
    EXPECT_EQ(result,0);
}

TEST(LengthOfLongestSubStringTest,test_bbbbb){
    string s = "bbbbb";
    int result = lengthOfLongestSubString::naive(s);
    // EXPECT_EQ(result,0);
}

TEST(LengthOfLongestSubStringTest,test_dvdf){
    string s = "dvdf";
    int result = lengthOfLongestSubString::naive(s);
    // EXPECT_EQ(result,0);
}

TEST(LengthOfLongestSubStringTest,test_abcabcbb){
    string s = "abcabcbb";
    int result = lengthOfLongestSubString::naive(s);
    // EXPECT_EQ(result,0);
}

TEST(LengthOfLongestSubStringTest,test_space){
    string s = " ";
    int result = lengthOfLongestSubString::naive(s);
    // EXPECT_EQ(result,0);
}

TEST(LengthOfLongestSubStringTest,test_pwwkew){
    string s = "pwwkew";
    int result = lengthOfLongestSubString::naive(s);
    // EXPECT_EQ(result,0);
}