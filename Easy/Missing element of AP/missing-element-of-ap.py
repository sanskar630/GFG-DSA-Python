#User function Template for python3

class Solution:
    def findMissing(self, arr, n):
        # code here
        d = (arr[n-1] - arr[0]) // n

        for i in range(1, n):
          if (arr[i] - arr[i-1]) != d:
            return arr[i-1] + d

        return -1


#{ 
 # Driver Code Starts
#Initial Template for Python 3



if __name__ == '__main__':
    tc = int(input())
    while tc > 0:
        n = int(input())
        arr = list(map(int, input().strip().split()))
        ob = Solution()
        ans = ob.findMissing(arr, n)
        print(ans)
        tc -= 1

# } Driver Code Ends