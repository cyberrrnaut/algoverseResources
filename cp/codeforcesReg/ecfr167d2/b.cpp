#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

class Solution {
private:
    int f(int i, int j, string& a, string& b,
              vector<vector<int>>& dp) {
        if (i < 0 || j < 0)
            return 0;

        if (dp[i][j] != -1)
            return dp[i][j];

        if (a[i] == b[j]) {
            return dp[i][j] = 1 + f(i - 1, j - 1, a, b, dp);
        } else {
            return dp[i][j] = max(f(i - 1, j, a, b, dp),   // max of both two steps
                                  f(i, j - 1, a, b, dp));
        }
    }

public:
    void cyb3rnaut() {
     string a,b;   

     cin>>a>>b;
      


     int n= a.length();
     int m=  b.length();

      vector<vector<int>>dp(n,vector<int>(m,-1));
     int lcs = f(n-1,m-1,a,b,dp);

     int ans= n +m - lcs;   

     cout<<ans<<endl;
    }
};

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    Solution s;
    ll t;
    cin >> t;
    
    while (t--) {
        s.cyb3rnaut();
    }
    
    return 0;
}
