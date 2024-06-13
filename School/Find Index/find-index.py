#User function Template for python3

class Solution:
    def findIndex(self, arr, n, key):
        result = [-1, -1]
        
        # Find the first occurrence of key
        for i in range(n):
            if arr[i] == key:
                result[0] = i
                break
                
        # Find the last occurrence of key
        for i in range(n-1, -1, -1):
            if arr[i] == key:
                result[1] = i
                break
                
        return result



#{ 
 # Driver Code Starts
#Initial Template for Python 3


t=int(input())
for _ in range(0,t):
    n=int(input())
    a=list(map(int,input().split()))
    key=int(input())
    ob = Solution()
    ans=ob.findIndex(a, n, key )
    print(*ans)
    
# } Driver Code Ends