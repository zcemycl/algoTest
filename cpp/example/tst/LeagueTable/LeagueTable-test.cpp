#include "LeagueTable/leagueTable.h"
#include "gtest/gtest.h"

using namespace std;

class leagueTable_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(leagueTable_MultipleParamsTests, CheckAns){
    int n = get<0>(GetParam());
    int expected = get<1>(GetParam());
    ASSERT_EQ(expected,leagueTable::naive(n));
};

INSTANTIATE_TEST_CASE_P(
    LeagueTableTests,
    leagueTable_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
