//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    /*You are required to complete this method*/
    int check(string &pattern, string &str, vector<vector<int>> &dp,int idx1, int idx2){
        if(idx1 < 0 && idx2 < 0){
            return 1;
        }
        if(idx1 >= 0 && idx2 < 0){
            return 0;
        }
        if(idx1 < 0 && idx2 >= 0){
            for(int k = idx2 ; k >= 0; k--){
                if(pattern[k] != '*'){
                    return 0;
                }
            }
            return 1;
        }
        if(dp[idx1][idx2] != -1){
            return dp[idx1][idx2];
        }
        if(str[idx1] == pattern[idx2] || pattern[idx2] == '?'){
           return dp[idx1][idx2] = check(pattern, str, dp, idx1 - 1, idx2 - 1);
        }else{
            if(pattern[idx2] == '*'){
                return dp[idx1][idx2] = check(pattern, str, dp, idx1 - 1, idx2) || check(pattern, str, dp, idx1, idx2 - 1);
            }
            else{
                return dp[idx1][idx2] = 0;
            }
        }
    }
    
    int wildCard(string pattern, string str) {
        int n = str.length();
        int m = pattern.length();
        vector<vector<int>> dp (n + 1, vector<int> (m + 1, -1));
        return check(pattern, str, dp, n - 1, m - 1);
    }

};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, text;
        cin >> pat;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin >> text;
        Solution obj;
        cout << obj.wildCard(pat, text) << endl;
    }
}

// } Driver Code Ends