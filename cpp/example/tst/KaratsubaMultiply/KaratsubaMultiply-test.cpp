#include "KaratsubaMultiply/karatsubaMultiply.h"
#include "gtest/gtest.h"

using namespace std;

class karatsubaMultiply_MultipleParamsTests : 
    public ::testing::TestWithParam<tuple<string,string,string>>{
};

TEST_P(karatsubaMultiply_MultipleParamsTests, CheckAns){
    string a = get<0>(GetParam());
    vector<int> avec = karatsubaMultiply::str2vec(a);
    string b = get<1>(GetParam());
    string expected = get<2>(GetParam());
    vector<int> bvec = karatsubaMultiply::str2vec(b);
    vector<int> cvec = karatsubaMultiply::naive(avec,bvec);
    karatsubaMultiply::printVec(cvec);
    ASSERT_EQ(expected,karatsubaMultiply::vec2str(cvec));
};

INSTANTIATE_TEST_CASE_P(
    KaratsubaMultiplyTests,
    karatsubaMultiply_MultipleParamsTests,
    ::testing::Values(
    make_tuple("3141592653589793238462643383279502884197169399375105820974944592",
    "2718281828459045235360287471352662497757247093699959574966967627",
    "8539734222673567065463550869546574495034888535765114961879601127067743044893204848617875072216249073013374895871952806582723184"),
    make_tuple("5678","1234","007006652")
    )
);
