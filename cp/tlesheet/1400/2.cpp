#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

class Solution {
public:
    void cyb3rnaut() {
    ll n;
    cin>>n;

    ll ans =0;
    ll sl=1e9,tl=1e9;

    for(ll i=0;i<n;i++){
        ll inp;
        cin>>inp;
      if(sl>tl) swap(sl,tl);

      if(inp<=sl){  //below sl
        sl=inp;
      }else if(inp<=tl){ //between
        tl=inp;
      }else{  //greater than tl
        sl=inp;
        ans++; // penalty will increase anyways
      } 

     }
  

     cout<<ans<<endl;
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