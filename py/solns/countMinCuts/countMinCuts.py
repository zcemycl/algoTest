import os
import copy
from random import seed,randint
current = os.path.dirname(os.path.realpath(__file__))
class Solution:
    @staticmethod
    def loadGraph():
        graph = dict()
        total = 0
        with open(current+'/kargerMinCut.txt','r') as f:
            for line in f.readlines():
                tmp = [int(tmpstr) for tmpstr in line.split()]
                graph[tmp[0]] = tmp[1:]
                total += len(tmp[1:])
        return graph,total
    @staticmethod
    def drawEdge(graph,total):
        n = randint(1,total)
        count = 0
        for key,val in graph.items():
            L = len(val)
            if n-1-count<L:
                return key,val[n-1-count]
            count+=L
    @staticmethod
    def naive(graph,total):
        while len(graph) != 2:
            fro,to = Solution.drawEdge(graph,total)
            graph[fro].remove(to)
            graph[to].remove(fro)
            cfro_to = graph[fro].count(to)
            cto_fro = graph[to].count(fro)
            common = min(cfro_to,cto_fro)
            graph[fro] = [t for t in graph[to]+graph[fro] \
                if t!=to and t!=fro]+[fro]*(cfro_to+cto_fro-2*common)
            del graph[to]
            total-=(2+2*common)
            # replace node (to) with node (from)
            for key,val in graph.items():
                if key!=to and key!=fro:
                    graph[key] = [fro if t==to else t for t in val]
        pairs=list(graph.items())
        return len([tmp for tmp in pairs[0][1] if tmp != pairs[0][0]])
