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
     cin>>n;

     vector<ll> uArr(n);
     vector<ll> lArr(n);

     for(int i=0;i<n;i++){
        cin>>uArr[i];
     }
      for(int i=0;i<n;i++){
        cin>>lArr[i];
     }

 
    ll ans= -1e18;

    for(int i=0;i<n;i++){
        ll sum = uArr[i] + lArr[i];

        for(int j=0;j<n;j++){
         if(i!=j){
            sum+=max(lArr[j],uArr[j]);
         }
        }
     ans=max(sum,ans);
    }

    cout<<ans<<endl;
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
