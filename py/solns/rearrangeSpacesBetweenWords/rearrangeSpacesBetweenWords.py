
class Solution:
    @staticmethod
    def naive(text):
        L,wordL,words,word = 0,0,[],""
        for c in text:
            if c!=" ":
                word+=c
                wordL+=1
            else:
                if word!="":
                    words.append(word)
                word=""
            L+=1
        if word!="":
            words.append(word)
        nwords = len(words)
        line = words[0]
        spaceL = L-wordL
        if nwords-1==0:
            minSpace = 0
        else:
            minSpace = spaceL//(nwords-1)
        for word in words[1:]:
            line+=" "*minSpace+word
            spaceL-=minSpace
        return line+(" "*spaceL if spaceL>0 else "")
