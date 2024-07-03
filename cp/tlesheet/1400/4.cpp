//C. Array Game
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef map<ll, ll> mll;
typedef vector<pair<ll, ll>> vpll;
typedef pair<int, int> pii;

#define all(x) (x).begin(), (x).end()
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define sz(x) (int)(x).size()

template<typename T1, typename T2>
ostream &operator<<(ostream &os, const pair<T1, T2> &p) {
    return os << '(' << p.first << ", " << p.second << ')';
}

template<typename T>
ostream &operator<<(ostream &os, const vector<T> &v) {
    os << '[';
    for (int i = 0; i < sz(v); i++) {
        if (i) os << ", ";
        os << v[i];
    }
    return os << ']';
}

#define debug(x) cerr << #x << " = " << x << endl

void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
}

class Solution {
public:
    void cyb3rnaut() {
        ll n, k;
        cin >> n >> k;

        vll arr(n);
        mll mpp;
        bool flag = false;
        ll mini = LLONG_MAX;

        for (ll i = 0; i < n; i++) {
            cin >> arr[i];
            mini = min(mini, arr[i]);
            if (mpp[arr[i]] > 0) flag = true;
            mpp[arr[i]]++;
        }

        if (flag || k > 2) {
            cout << 0 << endl;
            return;
        }

        vll temp;

        // k = 1
        for (ll i = 0; i < n-1; i++) {
          for(ll j=i+1;j<n;j++){
              temp.pb(abs(arr[i] - arr[j]));
          }
          
        }

        for (ll i = 0; i < (ll)(temp.size()); i++) {
            mini = min(mini, temp[i]);
        }
        if (k == 1) {
            cout << mini << endl;
            return;
        }

        // k = 2
        sort(arr.begin(),arr.end());

        for (ll i = 0; i < (ll)(temp.size()); i++) {
            auto it = lower_bound(arr.begin(), arr.end(), temp[i]);

            if (it != arr.end()) {
                mini = min(mini, abs(temp[i] - *it));
            }
            if (it != arr.begin()) {
                it--;
                mini = min(mini, abs(temp[i] - *it));
            }
        }
        cout << mini << endl;
    }
};

void solve() {
    Solution s;
    ll t;
    cin >> t;
    while (t--) {
        s.cyb3rnaut();
    }
}

signed main() {
    fast_io();
    solve();
    return 0;
}


// 1
// 0
// 3
// 500000000000000000
