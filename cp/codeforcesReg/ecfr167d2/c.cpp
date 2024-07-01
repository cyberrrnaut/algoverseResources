#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

class Solution {
private:

public:
    void cyb3rnaut() {
    
    ll n;
    cin>>n;

    vector<ll> a(n),b(n);
    

    for( ll i=0;i<n;i++) cin>>a[i]; 

    for( ll i=0;i<n;i++) cin>>b[i];

    
    ll revA=0,revB=0 ,plus =0, minu =0;


    for(ll i=0;i<n;i++){

     if(a[i]==b[i]){
       if(a[i]==-1) minu++;
       else if (a[i]==1) plus++;
     }else{
     if(a[i]>b[i]) revA+=a[i];
     else revB+=b[i];
     }
    }



        while (plus--){
        if(revA>revB){
         revB+=1;
        }else{
         revA+=1;
        }
     }

     while(minu--){
        if(revA>revB){
            revA--;
        }else{
            revB--;
        }
     }
       
     
     
     cout<<min(revA,revB)<<endl;



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



