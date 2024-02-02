# Your task is to complete this function
# Function should return True/False or 1/0
def PalinArray(arr ,n):
    # Code here
    for i in range(0,n):
        a=arr[i]
        reverse=0
        while(a!=0) :
            reverse=reverse*10+a%10
            a=a//10
        if(reverse!=arr[i]) :
            return 0
    return 1


#{ 
 # Driver Code Starts
# Driver Program
if __name__=='__main__':
    t=int(input())
    for i in range(t):
        n = int(input())
        arr = list(map(int, input().strip().split()))
        if PalinArray(arr, n):
            print(1)
        else:
            print(0)
# Contributed By: Harshit Sidhwa

# } Driver Code Ends