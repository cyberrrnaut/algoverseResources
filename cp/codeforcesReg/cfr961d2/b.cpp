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

        ll n,m;

        cin>>n>>m;

        vll arr(n);

        for(ll i=0;i<n;i++){
            cin>>arr[i];
        }


        sort(arr.begin(),arr.end());


         vll prefSum(n);

         for(ll i=1;i<n;i++){
            prefSum[i]= prefSum[i-1]+arr[i];
         }

         vll petals;


         for(ll i=0;i<n;i++){

            auto it = upper_bound(arr.begin(),arr.end(),arr[i]+1);
             
             if(*it arr[i]+) 
            it--;

            int ind = it - arr.begin();

            if(i==0){
             petals.push_back(prefSum[ind]-0);
            }else{
               petals.push_back(prefSum[ind]-prefSum[i-1]);  
            }
           

         }

           
           ll cost = 0LL;

         for( int i=0;i<petals.size();i++){
            if(petals[i]<=m){
                 cost = max(cost,petals[i]);
            }
         }


         cout<<cost<<endl;
    
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