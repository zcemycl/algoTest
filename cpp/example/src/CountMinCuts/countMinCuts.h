#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <tuple>
#include <fstream>
#include <sstream>
#include <stdio.h>
#include <filesystem>
#include <stdlib.h>
#include <string>
#include <math.h>

using namespace std;

class countMinCuts{
    public:
        static tuple<int,vector<int>> str2vec(string numstr);
        static void printVec(vector<int>& nums);
        static tuple<map<int,vector<int>>,int> loadGraph();
        static tuple<int,int> drawEdge(map<int,vector<int>>& graph,int total);
        static int naive(map<int,vector<int>>& graph,int total);
};
