#include "PathSum/pathSum.h"
#include "gtest/gtest.h"

using namespace std;

class pathSum_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<vector<string>,int,bool>>{
};

TEST_P(pathSum_MultipleParamsTests, CheckAns){
    vector<string> nums = get<0>(GetParam());
    int targetSum = get<1>(GetParam());
    bool expected = get<2>(GetParam());
    TreeNode* root = TreeNode::treeNode_fromList2(nums);
    ASSERT_EQ(expected,pathSum::naive(root,targetSum));
};

INSTANTIATE_TEST_CASE_P(
    PathSumTests,
    pathSum_MultipleParamsTests,
    ::testing::Values(
        make_tuple(vector<string>{"5","4","8","11","None",
            "13","4","7","2","None","None","None","1"},22,true),
        make_tuple(vector<string>{"1","2","3"},5,false),
        make_tuple(vector<string>{"1","2"},0,false)
    )
);
