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
                    sqid = r//3*3+c//3
                    if tmp in rows[r] or tmp in cols[c] or \
                        tmp in sqs[sqid]:
                        return False
                    rows[r].add(tmp)
                    cols[c].add(tmp)
                    sqs[sqid].add(tmp)
        return True