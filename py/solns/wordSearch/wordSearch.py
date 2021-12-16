class Solution:
    @staticmethod
    def naive(board,word):
        rows,cols,n = len(board),len(board[0]),len(word)
        visited = set()
        def dfs(i,j,k):
            idf = str(i)+','+str(j)
            if i<0 or j<0 or i>cols-1 or j>rows-1 or \
                board[j][i]!=word[k] or idf in visited:
                return False
            if k==n-1 and word[k]==board[j][i]:
                return True
            visited.add(idf)
            if word[k]==board[j][i]:
                return dfs(i+1,j,k+1) or dfs(i-1,j,k+1) or\
                    dfs(i,j+1,k+1) or dfs(i,j-1,k+1)
        for j in range(rows):
            for i in range(cols):
                if board[j][i]==word[0]:
                    if dfs(i,j,0): return True
        return False
    @staticmethod
    def quick(board,word):
        ''' Improve by,
        1. Exclude set which stores visited coordinates, and use #.
        2. No indicing in original word.
        3. Quick exit for 4 directions.
        '''
        rows,cols,n = len(board),len(board[0]),len(word)
        def dfs(i,j,remain):
            if len(remain)==0: return True
            if i<0 or j<0 or i>cols-1 or j>rows-1 or \
                board[j][i]!=remain[0]: return False
            board[j][i]="#"
            ret = False
            for rowOff,colOff in [(1,0),(-1,0),(0,1),(0,-1)]:
                ret = dfs(i+colOff,j+rowOff,remain[1:])
                if ret: break
            board[j][i]=remain[0]
            return ret
        for j in range(rows):
            for i in range(cols):
                if board[j][i]==word[0]:
                    if dfs(i,j,word): return True
        return False