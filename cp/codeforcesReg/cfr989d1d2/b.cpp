#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pii;

#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()

void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
}

class Solution {

public:
    void cyb3rnaut() {
        int n, m, k;
        cin >> n >> m >> k;

        string str;
        cin >> str;

        
        int ops=0;

        int zeros=0;

        for(int i=0;i<n;i++){
            if(str[i]=='0'){
              zeros++;
              if(zeros==m){
                ops++;
                zeros=0;
                i= i+k-1;
              }
            }else{
                zeros=0;
            }
        }

        cout<<ops<<endl;
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
