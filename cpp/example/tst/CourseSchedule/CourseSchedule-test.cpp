#include "CourseSchedule/courseSchedule.h"
#include "gtest/gtest.h"

using namespace std;

class courseSchedule_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(courseSchedule_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,courseSchedule::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    CourseScheduleTests,
    courseSchedule_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
