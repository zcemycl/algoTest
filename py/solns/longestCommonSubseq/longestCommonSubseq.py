
class Solution:
    # @staticmethod
    # def naive(text1,text2):
    #     print(text1,text2)
    #     if len(text1)==0 or len(text2)==0: return 0
    #     visited = Solution.dfs(text1,text2,"",0,0,dict())
    #     print(visited)
    # @staticmethod
    # def dfs(text1,text2,acum,si,sj,visited):
    #     if acum not in visited:
    #         print(acum)
    #         visited[acum]=len(acum)
    #     if si>len(text1)-1: return 
    #     if sj>len(text2)-1:
    #         if si<=len(text1)-1:
    #             if acum=="":
    #                 Solution.dfs(text1,text2,acum,si+1,0,visited)
    #             return
    #     # print(si,sj,text1[si],text2[sj])
    #     if text1[si]==text2[sj]:
    #         Solution.dfs(text1,text2,acum,si+1,sj,visited)
    #         Solution.dfs(text1,text2,acum+text1[si],si+1,sj+1,visited)
    #     else:
    #         Solution.dfs(text1,text2,acum,si,sj+1,visited)
    #     # print(visited)
    #     return visited
    @staticmethod
    def dp(text1,text2):
        dpl=[[0 for j in range(len(text2)+1)] for i in range(len(text1)+1)]
        for i in range(len(text1)-1,-1,-1):
            for j in range(len(text2)-1,-1,-1):
                if text1[i]==text2[j]:
                    dpl[i][j] = 1+dpl[i+1][j+1]
                else:
                    dpl[i][j] = max(dpl[i][j+1],dpl[i+1][j])
        return dpl[0][0]