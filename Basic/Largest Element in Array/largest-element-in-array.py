#User function Template for python3

def largest( arr, n):
    x=arr[0]
    
    for i in range (0, n) :
        if arr[i]>x :
            x= arr[i]
            
    return x        




#{ 
 # Driver Code Starts
#Initial Template for Python 3

def main():

    T = int(input())

    while(T > 0):
        n = int(input())
        a = [int(x) for x in input().strip().split()]
        print(largest(a, n))

        T -= 1


if __name__ == "__main__":
    main()





    
# } Driver Code Ends