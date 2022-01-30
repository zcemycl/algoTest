class Solution:
    def naive(self,words,maxWidth):
        self.maxWidth = maxWidth
        def splitSpace(width,nwords,mode="normal"): # normal/last
            if mode=="last":
                spaces = []
                while nwords!=0:
                    width-=1
                    nwords-=1
                    spaces.append(" ")
                return spaces+[" "*width if width>0 else ""]
            if nwords==0:
                return [" "*width]
            else:
                spaces=[]
                while nwords!=0:
                    tmpL = math.ceil(width/nwords)
                    width-=tmpL
                    nwords-=1
                    spaces.append(" "*tmpL)
                return spaces+[""]
        def getLine(strings,accL,mode="normal"):
            tmp = strings[0]
            remainL = self.maxWidth-accL
            spaces = splitSpace(remainL,len(strings)-1,mode=mode)
            for i,string in enumerate(strings[1:]):
                tmp+=spaces[i]+string
            tmp+=spaces[-1]
            return tmp
        res,strings,accL = [],[],0
        for word in words:
            L = len(word)
            leastSpaceL = 0 if len(strings)==0 else len(strings)
            if accL+L+leastSpaceL<=maxWidth:
                strings.append(word)
                accL+=L
            else:
                line = getLine(strings,accL,mode="normal")
                res.append(line)
                # reset
                line,strings,accL = "",[word],len(word)
        if len(strings)!=0:
            line = getLine(strings,accL,mode="last")
            res.append(line)
        return res
