#include "MeetingRooms2/meetingRooms2.h"
#include "gtest/gtest.h"

using namespace std;

class meetingRooms2_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(meetingRooms2_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,meetingRooms2::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    MeetingRooms2Tests,
    meetingRooms2_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
