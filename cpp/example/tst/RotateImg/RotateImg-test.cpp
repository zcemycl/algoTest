#include "RotateImg/rotateImg.h"
#include "gtest/gtest.h"

using namespace std;

class rotateImg_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<vector<vector<int>>,
        vector<vector<int>>>>{
};

TEST_P(rotateImg_MultipleParamsTests, CheckAns){
    vector<vector<int>> matrix = get<0>(GetParam());
    vector<vector<int>> expected = get<1>(GetParam());
    rotateImg::naive(matrix);
    ASSERT_EQ(expected,matrix);
};

INSTANTIATE_TEST_CASE_P(
    RotateImgTests,
    rotateImg_MultipleParamsTests,
    ::testing::Values(
        make_tuple(vector<vector<int>>{
            {1,2,3},{4,5,6},{7,8,9}},
            vector<vector<int>>{
            {7,4,1},{8,5,2},{9,6,3}}),
        make_tuple(vector<vector<int>>{
            {5,1,9,11},{2,4,8,10},{13,3,6,7},{15,14,12,16}},
            vector<vector<int>>{
            {15,13,2,5},{14,3,4,1},{12,6,8,9},{16,7,10,11}})
    )
);
