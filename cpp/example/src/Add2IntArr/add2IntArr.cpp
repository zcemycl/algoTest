#include "add2IntArr.h"

vector<int> add2IntArr::naive(vector<int>& num,int k){
    int Len = num.size();
    for (int i=0;i<Len;i++){
        int total = num[Len-i-1]+k%10;
        num[Len-i-1] = total%10;
        k/=10;
        k+=total/10;
    }
    while (k!=0){
        num.insert(num.begin(),k%10);
        k/=10;
    }
    return num;
}
