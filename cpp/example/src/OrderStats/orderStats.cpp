#include "orderStats.h"

void printVec(vector<int>& nums){
    for (int i=0;i<nums.size();i++){
        cout << nums[i] << " ";
    }
    cout<<endl;
}

void orderStats::policy(vector<int>& nums,int l,int r,string mode){
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

int orderStats::naive(vector<int>& nums,int n,int l,int r,string mode){
    int i=l+1;
    orderStats::policy(nums,l,r,mode);
    for (int j=l+1;j<r;j++){
        if (nums[l]>nums[j]){
            int tmp=nums[i];nums[i]=nums[j];nums[j]=tmp;
            i++;
        }
    }
    int tmp=nums[l];nums[l]=nums[i-1];nums[i-1]=tmp;
    // printVec(nums);
    if (n>i) l = i;
    else if (n<i) r = i-1;
    else if (n==i) return nums[i-1];
    return orderStats::naive(nums,n,l,r,mode);
}
