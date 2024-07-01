#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

class Solution {
public:
    void cyb3rnaut() {
        ll n, l, r;
        cin >> n >> l >> r;

        vector<ll> arr(n);

        for (ll i = 0; i < n; i++) {
            cin >> arr[i];
        }

        ll count = 0;
        ll left = 0, right = 0, sum = 0;

        while (right < n) {
            sum += arr[right];

            while (sum > r && left <= right) {
                sum -= arr[left];
                left++;
            }

            if (sum >= l && sum <= r) {
                count++;
                sum =0;
                left=right+1;
            }

            right++;
        }

        cout << count << endl;
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




