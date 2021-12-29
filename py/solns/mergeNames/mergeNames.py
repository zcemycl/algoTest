class Solution:
    @staticmethod
    def unique_names(names1,names2):
        return list(set(names1)|set(names2))
