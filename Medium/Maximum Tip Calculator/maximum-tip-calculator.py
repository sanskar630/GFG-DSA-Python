
from typing import List


class Solution:
    def maxTip(self, n : int, x : int, y : int, arr : List[int], brr : List[int]) -> int:
        # code here
        vp=[]
        for i in range(len(arr)):
            vp.append((abs(arr[i] - brr[i]), (arr[i], brr[i])))
        vp.sort(reverse=True)
    
        sum_val = 0
        for _, (a, b) in vp:
            if x > 0 and y > 0:
                if a < b:
                    sum_val += b
                    y -= 1
                else:
                    sum_val += a
                    x -= 1
            elif x > 0 and y <= 0:
                sum_val += a
                x -= 1
            elif y > 0 and x <= 0:
                sum_val += b
                y -= 1
    
        return sum_val


        



#{ 
 # Driver Code Starts
class IntArray:

    def __init__(self) -> None:
        pass

    def Input(self, n):
        arr = [int(i) for i in input().strip().split()]  #array input
        return arr

    def Print(self, arr):
        for i in arr:
            print(i, end=" ")
        print()


if __name__ == "__main__":
    t = int(input())
    for _ in range(t):

        n = int(input())

        x = int(input())

        y = int(input())

        arr = IntArray().Input(n)

        brr = IntArray().Input(n)

        obj = Solution()
        res = obj.maxTip(n, x, y, arr, brr)

        print(res)

# } Driver Code Ends