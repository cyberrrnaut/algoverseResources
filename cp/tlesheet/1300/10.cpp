// F. Yet Another Problem About Pairs Satisfying an Inequality
 
#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
class Solution {
public:
    void cyb3rnaut() {
        int n;
        cin >> n;
 
        vector<pair<int, int>> arr;
 
        for (int i = 0; i < n; i++) {
            int inp;
            cin >> inp;
            arr.push_back({inp, i + 1});
        }
        sort(arr.begin(),arr.end());
        
        vector<int> dp(n);
        int valid = 0;
        for (int i = n - 1; i >= 0; i--) {
            if (arr[i].first < arr[i].second) {
                valid++;
            }
            dp[i] = valid;
        }
 
        ll ans = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i].first < arr[i].second) {
                auto it = upper_bound(arr.begin(), arr.end(), arr[i].second,
                                      [](int value, const pair<int, int>& p) {
                                          return value < p.first;
                                      });
                if (it != arr.end()) {
                    int ind = it - arr.begin();
                    ans += dp[ind];
                }
            }
        }
 
        cout << ans << endl;
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