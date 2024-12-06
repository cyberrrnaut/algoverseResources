#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

class Solution {
public:
    void cyb3rnaut() {
     int n;
     cin>>n;
     ll ans;


     if(n==1 || n==3){
        cout<<-1<<endl;
        return;
     }


      string num(n, '3'); 
     
      num[n-1]='6';

     if(n%2==0){
        num[n-2]='6';
     }else{
        num[n-2]='6';
        num[n-4]='6';
     }
     
     ans= stoll(num);

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
