#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

class Solution {
public:
    void cyb3rnaut() {
     ll n;
     cin>>n;

     vector<ll> arr(n),temp(n);


     for(ll i=0;i<n;i++){
      cin>>arr[i];
     }

     temp = arr;
     
     sort(temp.begin(),temp.end(),greater<ll>());
      
      vector<ll>extra;
      ll i=0,j=0;
      while(i<n && j<n){
      if(arr[i]==temp[j]){
        j++;
      }else{
        extra.push_back(arr[i]);
      }
        i++;
      }
       

       ll ans =0;

       for(ll i=0;i<(ll)(extra.size())-1;i++){
        if(extra[i]<extra[i+1]) ans++;
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