//{ Driver Code Starts
/* Driver program to test above function */

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    long long int findMaxProduct(vector<int>& arr) {
        if(arr.size()==1) return arr[0];
        int modulo=1e9+7;
        int maxneg=INT_MIN;
        long long ans=1;
        for(int i=0;i<arr.size();i++){
            if(arr[i]){
                ans*=(long long)arr[i];
                ans%=modulo;
            }
            if((arr[i]<0) && (arr[i]>maxneg)) maxneg=arr[i];
        }
        return (ans>=0) ? (ans%modulo) : (ans/maxneg)%modulo;
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        long long int ans = ob.findMaxProduct(arr);
        cout << ans << endl;
    }
    return 0;
}

// } Driver Code Ends