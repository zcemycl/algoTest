using System;
using System.Collections.Generic;
using System.Linq;

namespace Sample.Graph{
    public class graph{
        public int V;
        public List<int>[] adj;
        public graph(int v){
            this.V = v;
            this.adj = new List<int>[v];
            for (int i=0;i<v;i++){
                this.adj[i] = new List<int>();
            }
        }
        public void addEdge(int v,int w){
            this.adj[v].Add(w);
        }
        public void addEdges(int v,List<int> ws){
            this.adj[v] = this.adj[v].Concat(ws).ToList();
        }
    }
}
