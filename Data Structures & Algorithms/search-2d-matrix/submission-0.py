class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        """
        [[1,2,4,8],[10,11,12,13],[14,20,30,40],[42,45,60,65]]

        my approach for this would be to take the max value of each and perform binary search. lets say in the case above I was looking for 11

        what I would do is id make the array
        [8,13,40]
        
        then do binary search. if we find the target here then we return true but if we dont and then when we reach the array that is the smallest value that is larger than the target, we enter its sub array and perform binary search on it from there
        """


        l,r = 0, len(matrix) - 1

        while l <= r:
            mid = (l + r) // 2
            if matrix[mid][-1] == target:
                return True
            elif matrix[mid][-1] < target:
                l = mid + 1
            else:
                r = mid - 1
        if l == len(matrix):
            return False
        row = matrix[l]
        l, r = 0, len(row) - 1
        while l <= r:
            mid = (l + r) // 2
            if row[mid] == target:
                return True
            elif row[mid] < target:
                l = mid + 1
            else:
                r = mid - 1
        return False
        



    
    



        