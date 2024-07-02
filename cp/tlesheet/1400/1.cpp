//E. Anna and the Valentine's Day Gift


#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

class Solution {
public:
    void cyb3rnaut() {
        ll n, m;
        cin >> n >> m;

        ll nonZeros = 0;
        vector<ll> zeroList;

        for (ll i = 0; i < n; i++) {
            ll inp;
            cin >> inp;
            string temp = to_string(inp);

            ll k = temp.length();
            ll zeroCount = 0;
            ll ind = k - 1;
            
            while (ind >= 0 && temp[ind] == '0') {
                zeroCount++;
                ind--;
            }
            
            if (zeroCount > 0) {
                zeroList.push_back(zeroCount);
            }
            
            nonZeros += (k - zeroCount);
        }

        sort(zeroList.begin(), zeroList.end(), greater<ll>());

       
        nonZeros--;

        for (ll i = 1; i < (ll)(zeroList.size()); i += 2) {
            nonZeros += zeroList[i];
        }

        if (nonZeros >= m) {
            cout << "Sasha" << endl;
        } else {
            cout << "Anna" << endl;
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



// Sasha
// Anna
// Anna
// Sasha
// Sasha
// Anna
// Anna
// Anna
// Sasha
