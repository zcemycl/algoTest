class Solution:
    @staticmethod
    def naive(root):
        out = defaultdict(list)
        def dfs(node,layer):
            if not node:
                return layer
            l=dfs(node.left,layer)
            r=dfs(node.right,layer)
            layer = max(l,r)
            out[layer].append(node.val)
            return layer+1
        dfs(root,0)
        return out.values()
