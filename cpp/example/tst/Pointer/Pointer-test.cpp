#include "gtest/gtest.h"
#include "Pointer/pointer.h"

using namespace std;

TEST(pointerTrial,deference){
    int a = 52;
    int* p = &a;
    EXPECT_EQ(*p,a);
}

TEST(pointerTrial,returnInt_callByVal){
    int a = 52;
    pointer::returnInt_callByVal(a);
    EXPECT_EQ(a,52);
}

TEST(pointerTrial,returnInt_callByRef){
    int a = 52;
    int* p = &a;
    pointer::returnInt_callByRef(p);
    EXPECT_EQ(a,53);
}

TEST(pointerTrial,returnInt_callByVal2){
    int a = 52;
    int result = pointer::returnInt_callByVal2(a);
    EXPECT_EQ(result,53);
}

TEST(pointerTrial,returnInt3){
    int a = 52;
    tuple<int,int,int> result = pointer::returnInt3(a);
    EXPECT_EQ(get<0>(result),a*2);
    EXPECT_EQ(get<1>(result),a*5);
    EXPECT_EQ(get<2>(result),a*11);
}

TEST(pointerTrial,returnIntString){
    intstring result = pointer::returnIntString();
    EXPECT_EQ(result.n,51);
    EXPECT_EQ(result.str,"Hello");
}

