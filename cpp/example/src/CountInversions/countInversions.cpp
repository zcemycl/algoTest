#include "countInversions.h"

vector<int> countInversions::loadtxt2arr(){
    string curPath = fs::current_path();
    curPath = curPath.substr(0,curPath.find("build"));
    ifstream myfile (curPath+"src/CountInversions/IntegerArray.txt");
    vector<int> result;string line;
    if (myfile.is_open()){
        while ( getline(myfile,line) ){
            result.push_back(stoi(line));
        }
        myfile.close();
    } else cout << "Unable to open file";
    return result;
}

tuple<vector<int>,int> countInversions::
    merge(vector<int>& a,vector<int>& b){
    int i=0;int j=0;vector<int> result;
    int count = 0;
    while (i<a.size() && j<b.size()){
        if (a[i]>b[j]){
            result.push_back(b[j]);
            j++;
            count += (a.size()-i);
        } else {
            result.push_back(a[i]);
            i++;
        }
    }
    if (i<a.size())
        result.insert(result.end(),a.begin()+i,a.end());
    if (j<b.size())
        result.insert(result.end(),b.begin()+j,b.end());
    return make_tuple(result,count);
}

tuple<vector<int>,int> countInversions::
    naive(vector<int>& nums){
    if (nums.size()<=1) return make_tuple(nums,0);
    int n = nums.size()/2;
    vector<int> L(nums.begin(),nums.begin()+n);
    vector<int> R(nums.begin()+n,nums.end());
    int cL; int cR; int c;
    tie(L,cL) = countInversions::naive(L);
    tie(R,cR) = countInversions::naive(R);
    tie(nums,c) = countInversions::merge(L,R);
    return make_tuple(nums,cL+cR+c);
}
