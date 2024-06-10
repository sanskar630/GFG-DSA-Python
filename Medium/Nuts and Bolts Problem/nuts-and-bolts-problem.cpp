//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:

    void matchPairs(int n, char nuts[], char bolts[]) {
        // code here
        vector<char> v= { '!', '#', '$', '%', '&', '*', '?', '@', '^' };
      map<char,int> mp;
      for(int i=0;i<9;i++){
          mp[v[i]]=0;
      }
      for(int i=0;i<n;i++){
          mp[nuts[i]]++;
      }
      int i=0;
      for(auto it:mp){
          int cnt=it.second;
          while(cnt){
              nuts[i]=it.first;
              bolts[i]=it.first;
              i++;
              cnt--;
          }
      }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        char nuts[n], bolts[n];
        for (int i = 0; i < n; i++) {
            cin >> nuts[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> bolts[i];
        }
        Solution ob;
        ob.matchPairs(n, nuts, bolts);
        for (int i = 0; i < n; i++) {
            cout << nuts[i] << " ";
        }
        cout << "\n";
        for (int i = 0; i < n; i++) {
            cout << bolts[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends