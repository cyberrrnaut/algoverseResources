#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

class Solution {
public:
    void cyb3rnaut() {
      ll x,y,k;
      cin>>x>>y>>k;
      
    
       
       
    while(k>0 && x>1){
        ll rem=y - x%y;
 
        if(rem>=k){
            x+=k;
            k=0;
        }
        else{
            x+=rem;
            k-=rem;
        }
        while(x%y==0) x/=y;
    }


    if(k>0){
        k%=y-1;
        x+=k;
    }
    cout<<x<<endl;

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





// 2
// 1
// 1
// 2
// 3
// 1338
// 1
// 16936
// 1
// 21180097
// 6486
// 1
// 2
