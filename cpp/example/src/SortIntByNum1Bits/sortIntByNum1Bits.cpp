#include "sortIntByNum1Bits.h"

bool sortIntByNum1Bits::comparison(const int x,const int y){
    if (x<y) return true;
    string sx = bitset<64>(x).to_string(); 
    string sy = bitset<64>(y).to_string(); 
    int num1x = count(sx.begin(),sx.end(),'1');
    int num1y = count(sy.begin(),sy.end(),'1');
    if (num1x<num1y) return true;
    return false;
};

vector<int> sortIntByNum1Bits::naive(vector<int>& arr){
    sort(arr.begin(),arr.end(),sortIntByNum1Bits::comparison);
    return arr;
}
