#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

class Solution {
public:
    void cyb3rnaut() {
     
    ll n,m,r,c;
    cin>>n>>m>>r>>c;

    if (n==1 && m==1){
        cout<<0<<endl;
        return;
    }
    
    ll oneValCol= 1*(m-c);

 
   
    if (n==1){
  
     cout<<oneValCol<<endl;
     return;
     
    }

   ll valAdj=(n-r)*(abs(m-1)+(2-1));


    if(m==1){
       cout<<valAdj<<endl;
     return;
    }

        ll oneValRow=(n-r)*(m-1);  //*1
  
    ll ans = oneValCol+valAdj+oneValRow;

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
