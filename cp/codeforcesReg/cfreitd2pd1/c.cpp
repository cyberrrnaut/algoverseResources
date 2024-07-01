#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

class Solution {
public:
    void cyb3rnaut() {
      ll n;
      cin>>n;

      vector<ll> arr(n);

      for(ll i=0;i<n;i++){
        cin>>arr[i];
      }
      
      if(n==0){
        cout<<arr[0];
        return;
      }


      ll last = arr[n-1];
       
       ll ans=0;
      for(ll i=n-2;i>=0;i--){
       if(arr[i]<=last){
        ans+= 1+ last- arr[i];
       }else if(arr[i]>last){
          
       }
       last = arr[i];
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
