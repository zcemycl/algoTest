class Tree:
    def __init__(self):
        self.children = {}
        self.isEnd = False
    
class WordDictionary:
    def __init__(self):
        self.root = Tree()

    def addWord(self,word):
        cur = self.root
        for c in word:
            if c not in cur.children:
                cur.children[c] = Tree()
            cur = cur.children[c]
        cur.isEnd = True

    def search(self,word):
        def dfs(j,tree):
            cur = tree
            for i in range(j,len(word)):
                c = word[i]
                if c==".":
                    for child in cur.children.values():
                        if dfs(i+1,child):
                            return True
                    return False
                else:
                    if c not in cur.children:
                        return False
                    cur = cur.children[c]
            return cur.isEnd

        return dfs(0,self.root)