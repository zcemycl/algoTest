#include "CountMinCuts/countMinCuts.h"
#include "gtest/gtest.h"

using namespace std;

class countMinCuts_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<int,int>>{
};

TEST_P(countMinCuts_MultipleParamsTests, CheckAns){
    map<int,vector<int>> graph; int total,seedId;
    tie(graph,total) = countMinCuts::loadGraph();
    int minCut = pow(total,2);
    int numTrials = 50; 
    for (int i=0;i<numTrials;i++){
        srand(i);
        map<int,vector<int>> tmpG(graph);
        int tmpT = total;
        int result = countMinCuts::naive(tmpG,tmpT);
        if (minCut>result){
            minCut = result;
            seedId = i;
        }
    }
    cout<<seedId<<": "<<minCut<<endl;
    ASSERT_LE(20,minCut);
};

INSTANTIATE_TEST_CASE_P(
    CountMinCutsTests,
    countMinCuts_MultipleParamsTests,
    ::testing::Values(
        make_tuple(0,0)
    )
);
