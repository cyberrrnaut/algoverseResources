#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

class Solution {
private:

public:
    void cyb3rnaut() {
     string a,b;   

     cin>>a>>b;
      


     int n= a.length();
     int m=  b.length();


    int ans = n+m;

  for(int j=0;j<m;j++){
    int ind = j;

    for(int i= 0;i<n;i++){

      if(b[ind]==a[i]){
          ind++;
        }
     }
     ans = min(ans,m+n-(ind-j));
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


// 4
// 4
// 3
// 7
// 7
