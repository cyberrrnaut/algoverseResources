#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

class Solution {
public:
    void cyb3rnaut() {
      int x1,x2,y1,y2;

      cin>>x1>>y1;
      cin>>x2>>y2;

      if(x1<y1 && x2>y2){
        cout<<"NO"<<endl;
        return;
      }
        if(x1>y1 && x2<y2){
        cout<<"NO"<<endl;
        return;
      }
      cout<<"YES"<<endl;

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
