#include "MeetingRooms/meetingRooms.h"
#include "gtest/gtest.h"

using namespace std;

class meetingRooms_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(meetingRooms_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,meetingRooms::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    MeetingRoomsTests,
    meetingRooms_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
