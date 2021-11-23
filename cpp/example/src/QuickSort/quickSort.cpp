#include "quickSort.h"

vector<int> quickSort::loadtxt2arr(){
    string curPath = fs::current_path();
    curPath = curPath.substr(0,curPath.find("build"));
    ifstream myfile (curPath+"src/QuickSort/QuickSort.txt");
    vector<int> result;string line;
    if (myfile.is_open()){
        while ( getline(myfile,line) ){
            result.push_back(stoi(line));
        }
        myfile.close();
    } else cout << "Unable to open file";
    return result;
};

void quickSort::policy(vector<int>& nums,int l,int r,string mode){
    if (mode=="end"){
        int tmp=nums[l];nums[l]=nums[r-1];nums[r-1]=tmp;
    } else if (mode=="med"){
        int n = l+(r-l-1)/2;
        if (min(nums[l],nums[r-1])<nums[n] && nums[n]<max(nums[l],nums[r-1])){
            n = n;
        } else if (min(nums[n],nums[r-1])<nums[l] && nums[l]<max(nums[n],nums[r-1])){
            n = l;
        } else {n = r-1;} 
        int tmp=nums[l];nums[l]=nums[n];nums[n]=tmp;
    }
};

void quickSort::naive(vector<int>& nums,int l,int r,string mode,int* ptr){
    if (r-l<=1) return;
    int i=l+1; *ptr += r-l-1;
    quickSort::policy(nums,l,r,mode);
    for (int j=l+1;j<r;j++){
        if (nums[l]>nums[j]){
            int tmp=nums[i];nums[i]=nums[j];nums[j]=tmp;
            i++;
        }
    }
    int tmp=nums[l];nums[l]=nums[i-1];nums[i-1]=tmp;
    quickSort::naive(nums,l,i-1,mode,ptr);
    quickSort::naive(nums,i,r,mode,ptr);
     
};