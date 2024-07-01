#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

class Solution {
public:
    void cyb3rnaut() {
        ll n;
        cin >> n;

        vector<ll> arr(n);
        for (ll i = 0; i < n; i++) {
            cin >> arr[i];
        }

        ll maxi = 0;
        vector<ll> temp;
        
        for (ll i = 0; i < n; i++) {
            if (arr[i] < maxi) {
                temp.push_back(maxi - arr[i]);
            }
            maxi = max(maxi, arr[i]);
        }
        
        sort(temp.begin(), temp.end());

        ll ans = 0;
        ll reduced = 0;
        ll count = temp.size() ; 
        
        for (int i = 0; i < temp.size(); i++) {
            ll num = temp[i] - reduced;
            ans += (count + 1 )* num;
            reduced += num;
            count--;
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
