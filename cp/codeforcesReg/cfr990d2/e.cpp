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

private:

    bool check(ll mid, vector<pair<ll,ll>>& arr){

     if(mid==0) return false;

           ll n=(ll)(arr.size()); 
        ll x=0;
    ll y=0;

     //a
     if(mid-1<n){
     x=arr[mid-1].first;
     y=arr[mid-1].second;
    }

    mid+=mid;

    //b
      if(mid-1<n){
        if( arr[mid-1].first >=x  || arr[mid-1].second<y){
            return false;
        } 
    
    }

    mid+=mid;

    //c
       if(mid-1<n){
        if( arr[mid-1].first <x  || arr[mid-1].second>=y){
            return false;
        } 
    
    }
   mid+=mid;

    //d
       if(mid-1<n){
        if( arr[mid-1].first >=x  || arr[mid-1].second>=y){
            return false;
        } 
    
    }


   return true;
     
    }

public:
    void cyb3rnaut() {
      
      ll n;
      cin>>n;

      vector<pair<ll,ll>>arr(n);

      for(int i=0;i<n;i++){
        cin>>arr[i].first;
        cin>>arr[i].second;
      }

      sort(arr.begin(),arr.end(),  greater<pair<ll,ll>>());

      ll low=0;
      ll high= n/4; // floor val

      ll ans=0;

      ll x=0;
      ll y=0;

      while(low<=high){

        ll mid= low + (high-low)/2;


        if(check(mid,arr)){
            ans=mid;
            low=mid+1;
        }else{
            high=mid-1;
        }
      }

      
      cout<<ans<<endl;
      
      if(ans==0){
        cout<<0<<" "<<0<<endl;
        return;
      }

      cout<<arr[ans-1].first<<" "<<arr[ans-1].second<<endl;


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
