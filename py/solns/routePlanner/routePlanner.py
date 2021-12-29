class Solution:
    @staticmethod
    def naive(from_row,from_column,to_row,to_column,map_matrix):
        r = len(map_matrix)
        c = len(map_matrix[0])
        if not map_matrix[from_row][from_column]:
            return False
        s = [(from_row,from_column)]
        visited = set()
        while len(s)!=0:
            y,x = s.pop()
            if y==to_row and x==to_column:
                return True
            for dy,dx in [(-1,0),(1,0),(0,-1),(0,1)]:
                y_,x_ = y+dy,x+dx
                if y_>=0 and y_<r and x_>=0 and x<c:
                    if (y_,x_) not in visited:
                        try:
                            if map_matrix[y_][x_]:
                                visited.add((y_,x_))
                                s.append((y_,x_))
                        except:
                            pass
        return False