class Solution(object):
    def countSquares(self, matrix):
        dp_table = [ list(row) for row in matrix ]
        h, w = len(matrix), len(matrix[0])
        for y in range(1, h):
            for x in range(1, w):
                if matrix[y][x]:
                    dp_table[y][x] = 1 + min(dp_table[y][x-1],dp_table[y-1][x-1],dp_table[y-1][x])
        
        return sum( chain(*dp_table) )
        