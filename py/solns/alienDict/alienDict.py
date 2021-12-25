from collections import defaultdict
class Solution:
    @staticmethod
    def naive(words):
        if len(words)==1: return "".join(set(words[0]))
        d = defaultdict(list)
        cur = words[0]
        for i in range(len(words)-1):
            nex = words[i+1]
            length = min(len(cur),len(nex))
            if cur[:length]==nex[:length]:
                if len(cur)!=len(nex) and len(nex)==length:
                    return ""
            for j in range(length):
                if cur[j]!=nex[j]:
                    if cur[j] not in d[nex[j]]:
                        d[nex[j]].append(cur[j])
                    break
                else:
                    if len(d[nex[j]])==0:
                        d[nex[j]]=[]
            for c in cur[j:]:
                if len(d[c])==0: d[c]=[]
            for c in nex[j:]:
                if len(d[c])==0: d[c]=[]
            cur = nex
        visited,res = set(),[]
        def dfs(node,path):
            if node in visited: return True
            if node in path: return False
            for child in d[node]:
                if child not in visited:
                    if not dfs(child,path|set(node)):
                        return False
            visited.add(node)
            res.append(node)
            return True
    
        for i in list(d):
            if i not in visited:
                if not dfs(i,set()):
                    return ""
        return "".join(res)
            