#include "containerWithMostH2O.h"

int containerWithMostH2O::naive(vector<int>& height){
    int l=0;int r=height.size()-1;
    int maxV = min(height[l],height[r])*r;
    while (l<r){
        if (height[l]>=height[r])r-=1;
        else l+=1;
        maxV = max(maxV,min(height[l],height[r])*(r-l));
    }
    return maxV;
}
