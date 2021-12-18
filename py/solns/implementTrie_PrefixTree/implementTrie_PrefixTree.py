class Tree:
    def __init__(self):
        self.children = {}
        self.isEnd = False

class Trie:
    def __init__(self):
        self.root = Tree()
    def insert(self,word): 
        cur = self.root
        for c in word:
            if c not in cur.children:
                cur.children[c] = Tree()
            cur = cur.children[c]
        cur.isEnd = True
    def search(self,word):
        cur = self.root
        for c in word:
            if c not in cur.children:
                return False
            cur = cur.children[c]
        return cur.isEnd
    def startsWith(self,prefix):
        cur = self.root
        for c in prefix:
            if c not in cur.children:
                return False
            cur = cur.children[c]
        return True
