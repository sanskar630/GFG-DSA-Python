#User function Template for python3
#User function Template for python3
import numpy as np
class Solution:
    def pattern (self, arr):
        # code here
        row=len(arr[0])
        col=len(arr)
        ar=np.array(arr).T
        if len(arr)==1:
            return '0 R'
        for i in range(col):
            if arr[i]==arr[i][::-1]:
                return str(i)+' '+'R'
        for i in range(len(ar)):
            if list(ar[i])==list(ar[i][::-1]):
                return str(i)+' '+'C'
        return -1


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    ob = Solution()
    t = int(input())
    for _ in range(t):
        n = int(input())
        arr = list(map(int, input().split()))
        a = list()
        c = 0
        for i in range(0, n):
            X = list()
            for j in range(0, n):
                X.append(arr[c])
                c += 1
            a.append(X)
        ans = ob.pattern(a)
        print(ans)

# } Driver Code Ends