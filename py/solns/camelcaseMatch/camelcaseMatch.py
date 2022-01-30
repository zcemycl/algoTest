class Solution:
    @staticmethod
    def naive(queries,pattern):
        res,L = [],len(pattern)
        for query in queries:
            ret,i=True,0
            for c in query:
                if i<L:
                    if c==pattern[i]:
                        ret*=True
                        i+=1
                    else:
                        if c in string.ascii_uppercase:
                            ret*=False
                            break
                else:
                    if c in string.ascii_uppercase:
                        ret*=False
                        break
            if i!=L:
                ret*=False
            res.append(ret)
        return res
