//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    vector<long long int> productExceptSelf(vector<long long int>& nums) {
        int n = nums.size();
        vector<long long int> front(n + 1, 1);
        front[n - 1] = nums.back();
        for(int i = n - 2; i >= 0; i--) {
            front[i] = front[i + 1]*nums[i];
        }
        
        long long int prev = 1;
        vector<long long int> ans;
        for(int i = 0; i < n; i++) {
            long long int curr = prev*front[i + 1];
            ans.push_back(curr);
            prev *= nums[i];
        }
        
        return ans;
    }
};



//{ Driver Code Starts.
int main() {
    int t; // number of test cases
    cin >> t;
    while (t--) {
        int n; // size of the array
        cin >> n;
        vector<long long int> arr(n), vec(n);

        for (int i = 0; i < n; i++) // input the array
        {
            cin >> arr[i];
        }
        Solution obj;
        vec = obj.productExceptSelf(arr); // function call

        for (int i = 0; i < n; i++) // print the output
        {
            cout << vec[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends