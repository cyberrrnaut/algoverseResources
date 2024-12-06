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

     vll arr(n);
     
     ll sum=0;
     for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
     }
     

     if(sum%n!=0){
        cout<<"NO"<<endl;
        return;
     }


     ll target=sum/n;
      

      for(int i=0;i<n-2;i++){
       
       if(arr[i]>target){
        ll diff=arr[i]-target;
        arr[i]-=diff;
        arr[i+2]+=diff;
       }else if(target>arr[i]){
        ll diff=target-arr[i];
        arr[i]+=diff;
        arr[i+2]-=diff;
       }
      }

      set<ll>st;

      for(int i=0;i<n;i++){
        st.insert(arr[i]);
      }
     
     if(st.size()==1){
        cout<<"YES"<<endl;
     }else{
        cout<<"NO"<<endl;
     }




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
