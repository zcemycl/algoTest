#include "graph.h"

Graph::Graph(int V){
    this->V = V;
    this->adj = new list<int>[V];
}

void Graph::addEdge(int v,int w){
    this->adj[v].push_back(w);
}

void Graph::addEdges(int v,list<int> ws){
    list<int> tmp = this->adj[v];
    tmp.insert(tmp.end(),ws.begin(),ws.end());
    this->adj[v] = tmp;
}
