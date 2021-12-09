class Node:
    def __init__(self,val=0,neighbors=None):
        self.val = val  
        self.neighbors = neighbors if neighbors is not None else []
    @staticmethod
    def fromList(l):
        if (len(l)==0): return None
        visited = {}
        visited[1] = Node(1,[])
        q = [visited[1]]
        i = 0
        while l:
            n = l.pop(0)
            for neighbor in n:
                if neighbor not in visited:
                    visited[neighbor] = Node(neighbor,[])
                visited[i+1].neighbors.append(visited[neighbor])
            i+=1
        return visited[1]
    @staticmethod
    def toList(node):
        if not node: return []

class Solution:
    @staticmethod
    def naive(node):
        if not node: return node
        visited = {}
        q = [node]
        visited[node]=Node(node.val,[])
        while q:
            n=q.pop(0)
            for neighbor in n.neighbors:
                if neighbor not in visited:
                    visited[neighbor]=Node(neighbor.val,[])
                    q.append(neighbor)
                visited[n].neighbors.append(visited[neighbor])
        return visited[node]
