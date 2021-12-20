from solns.graph.graph import *
import os
current = os.path.dirname(os.path.realpath(__file__))
class Solution:
    def __init__(self,path):
        self.t = 0
        self.G = Graph()
        self.Grev = Graph()
        self.maxNode = 0
        with open(current+path,'r') as f:
            for line in f.readlines():
                u,v = line.replace('\n','').split(' ')[:2]
                u,v = int(u),int(v)
                self.G.addEdge(u,v)
                self.Grev.addEdge(v,u)
                self.maxNode = max(self.maxNode,u,v)
               
    def naive(self):
        visited,n2t,t2n = set(),{},{}
        def dfs1(i): 
            if i in visited:
                return 
            visited.add(i)
            for neighbor in self.Grev.graph[i]:
                if neighbor not in visited:
                    dfs1(neighbor)
            n2t[i] = self.t
            t2n[self.t] = i
            self.t+=1
        
        for n in range(self.maxNode,-1,-1):
            if n not in visited:
                dfs1(n)

        def dfs2(i,members): 
            if i in visited:
                return members
            visited.add(i)
            for neighbor in self.G.graph[t2n[i]]:
                newT = n2t[neighbor]
                if newT not in visited: 
                    members = dfs2(newT,members+[newT])
            return members

        def dfs3(i,count):
            if i in visited: return count
            visited.add(i)
            for neighbor in self.G.graph[t2n[i]]:
                newT = n2t[neighbor]
                if newT not in visited:
                    count = dfs3(newT,count+1)
            return count

        print(visited,n2t,t2n)
        visited = set()
        for leader in range(self.maxNode,-1,-1):
            if leader not in visited:
                members = dfs2(leader,[leader])
                print(members)
        
        visited = set()
        for leader in range(self.maxNode,-1,-1):
            if leader not in visited:
                count = dfs3(leader,1)
                print(count)

    def kosarajuTwoPassRecursive(self):
        visited,n2t,t2n = set(),{},{}
        def dfs1(i): 
            if i in visited:
                return 
            visited.add(i)
            for neighbor in self.Grev.graph[i]:
                if neighbor not in visited:
                    dfs1(neighbor)
            n2t[i] = self.t
            t2n[self.t] = i
            self.t+=1
        
        for n in range(self.maxNode,-1,-1):
            if n not in visited:
                dfs1(n)

        def dfs3(i,count):
            if i in visited: return count
            visited.add(i)
            for neighbor in self.G.graph[t2n[i]]:
                newT = n2t[neighbor]
                if newT not in visited:
                    count = dfs3(newT,count+1)
            return count
        
        visited = set()
        res = []
        for leader in range(self.maxNode,-1,-1):
            if leader not in visited:
                count = dfs3(leader,1)
                res.append(count)
        res.sort(reverse=True)
        return res[:5]

    def kosarajuTwoPassLoop(self):
        visited,n2t,t2n = set(),{},{}
        for n in range(self.maxNode,-1,-1):
            if n not in visited:
                stack = [n]
                while stack!=[]:
                    i = stack.pop()
                    if i in visited:
                        n2t[i] = self.t
                        t2n[self.t] = i
                        self.t+=1
                        continue
                    visited.add(i)
                    stack.append(i)
                    for neighbor in self.Grev.graph[i]:
                        if neighbor not in visited:
                            stack.append(neighbor)

        visited = set()
        res = []
        for leader in range(self.maxNode,-1,-1):
            if leader not in visited:
                stack = [leader]
                members,count = [],0
                while stack!=[]:
                    i = stack.pop()
                    if i in visited: break
                    visited.add(i)
                    members.append(i)
                    count+=1
                    for neighbor in self.G.graph[t2n[i]]:
                        newT = n2t[neighbor]
                        if newT not in visited:
                            stack.append(newT)
                res.append(count)
        res.sort(reverse=True)
        return res[:5]