from collections import defaultdict
class Solution:
    @staticmethod
    def naive(board):
        n = len(board)
        rows = defaultdict(set)
        cols = defaultdict(set)
        sqs = defaultdict(set)
        for r in range(n):
            for c in range(n):
                if board[r][c]!=".":
                    tmp = board[r][c]
                    rows[r].add(tmp)
                    cols[c].add(tmp)
                    sqs[r//3*3+c//3].add(tmp)
        
        def valid(r,c,v):
            return v not in rows[r] and v not in cols[c] and \
                v not in sqs[r//3*3+c//3]
        def recursive(r,c):
            if r==n-1 and c==n:
                return True
            elif c==n:
                c=0
                r+=1
            if board[r][c]!=".":
                return recursive(r,c+1)
            sqid = r//3*3+c//3
            for v in range(1,10):
                tmp = str(v)
                if not valid(r,c,tmp):
                    continue
                board[r][c] = tmp
                rows[r].add(tmp)
                cols[c].add(tmp)
                sqs[sqid].add(tmp)

                if recursive(r,c+1):
                    return True

                board[r][c] = "."
                rows[r].remove(tmp)
                cols[c].remove(tmp)
                sqs[sqid].remove(tmp)

            return False
        recursive(0,0)