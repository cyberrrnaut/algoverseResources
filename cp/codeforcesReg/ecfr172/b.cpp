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
     int n;
     cin>>n;
     
     map<int,int> mpp;

     for(int i=0;i<n;i++){
      int inp;
      cin>>inp;
      mpp[inp]++;

     }

     int solo=0;
     int mul=0;

     for(auto[num,freq]:mpp){
        if(freq==1){
            solo++;
        }else{
            mul++;
        }
     }
    
    if(n==1){
        cout<<2<<endl;
        return;
    }

    if(mpp.size()==1){
        cout<<1<<endl;
        return;
    }
    
    int alice = (solo+1) /2;
    alice*=2;
    alice+=mul;

    cout<<alice<<endl;
    

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
