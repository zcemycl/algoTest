#include "bfs.h"

string bfs::naive(Graph* G,int s){
    int V = G->V;
    bool *visited = new bool[V];
    for (int i=0;i<V;i++)
        visited[i] = false;
    string seq = "";

    list<int> q; 
    q.push_back(s);
    visited[s] = true;

    list<int>::iterator it;
    while (!q.empty()){
        int parent = q.front();
        seq += to_string(parent);
        q.pop_front();

        for (it=G->adj[parent].begin();it!=G->adj[parent].end();++it){
            if (!visited[*it]){
                visited[*it] = true;
                q.push_back(*it);
            }
        }
    }
    return seq;
}
