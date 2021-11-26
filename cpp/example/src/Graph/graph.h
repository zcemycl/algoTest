#include <iostream>
#include <list>

using namespace std;

class Graph{
    public:
        int V; // number of vertices
        list<int> *adj;
        Graph(int V);
        void addEdge(int v,int w);
        void addEdges(int v,list<int> ws);
};
