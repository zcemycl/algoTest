#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <tuple>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <math.h>

#if __has_include(<experimental/filesystem>)
  #include <experimental/filesystem> 
  namespace fs = std::experimental::filesystem;
#else
  error "Missing the <filesystem> header."
#endif
using namespace std;

class countMinCuts{
    public:
        static tuple<int,vector<int>> str2vec(string numstr);
        static void printVec(vector<int>& nums);
        static tuple<map<int,vector<int>>,int> loadGraph();
        static tuple<int,int> drawEdge(map<int,vector<int>>& graph,int total);
        static int naive(map<int,vector<int>>& graph,int total);
};
