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
        ll n;
        cin >> n; 

        vector<ll> arr(n + 1); 

        for (ll i = 1LL; i <= n; i++) {
            cin >> arr[i];
        }

        if (n == 1) {
            cout << 1 << endl;
            return;
        }

        ll maxi = -1e9;  

        if (n % 2 == 0) {
            for (ll i = 1LL; i <= n; i += 2) {
                if (i + 1 <= n) { 
                    maxi = max(maxi, abs(arr[i] - arr[i + 1]));
                }
            }
        } else {
            ll mini = 1e9; 

            for (ll i = 1; i <= n; i += 1) {
                ll maxi1 = -1e9;  
                

                ll j= 1;

                while(j<=n){

                     if (j == i) {
                        j += 1;
                        continue;
                    }
           if (j + 1 <= n) {  
                        maxi1 = max(maxi1, abs(arr[j] - arr[j + 1])); 
                    }

                 j+=2;
                }
        
                mini = min(mini, maxi1); 
            }


            maxi = mini;  
        }

        cout << maxi << endl; 
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