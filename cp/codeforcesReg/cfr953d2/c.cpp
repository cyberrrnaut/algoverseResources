#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

class Solution {
public:
    void cyb3rnaut() {
        ll n, k;
        cin >> n >> k;
        
        vector<ll> temp;
        ll low = 1;
        ll high = n - 1;
        
        while (low <= high) {
            ll num = high * low + low * high; // The same value due to multiplication being commutative
            temp.push_back(num);
            high--;
            low++;
        }
        temp.push_back(0);
        sort(temp.begin(), temp.end());
        
        auto it = lower_bound(temp.begin(), temp.end(), k);
        
        if (it != temp.end() && *it == k) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
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
