#include <iostream>
#include <vector>
#include <string>
#include <tuple>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm>
#if __has_include(<experimental/filesystem>)
  #include <experimental/filesystem> 
  namespace fs = std::experimental::filesystem;
#else
  error "Missing the <filesystem> header."
#endif

using namespace std;

class quickSort{
    public:
        static vector<int> loadtxt2arr();
        static void policy(vector<int>& nums,
            int l,int r,string mode);
        static void naive(vector<int>& nums,int l,int r,string mode,int* ptr);
};
