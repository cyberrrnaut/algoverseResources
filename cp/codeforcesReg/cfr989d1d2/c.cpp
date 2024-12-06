#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef map<ll, ll> mll;
typedef vector<pair<ll, ll>> vpll;
typedef pair<int, int> pii;

#define all(x) (x).begin(), (x).end()
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define sz(x) (int)(x).size()

template<typename T1, typename T2>
ostream &operator<<(ostream &os, const pair<T1, T2> &p) {
    return os << '(' << p.first << ", " << p.second << ')';
}

template<typename T>
ostream &operator<<(ostream &os, const vector<T> &v) {
    os << '[';
    for (int i = 0; i < sz(v); i++) {
        if (i) os << ", ";
        os << v[i];
    }
    return os << ']';
}

#define debug(x) cerr << #x << " = " << x << endl

void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
}

class Solution {
public:
    void cyb3rnaut() {
      
      int n,m;
      cin>>n>>m;

      vector<vector<char>>mat(n,vector<char>(m));
      vector<vector<int>>vis(n,vector<int>(m,1));
    
     for(int i=0;i<n;i++){
       
            string str;
            cin>>str;

            for(int j=0;j<m;j++){
                mat[i][j]=str[j];
            }
        
     }
    
    if(n==1 && m==1 ){
        cout<<0<<endl;
        return;
    }

     queue<pair<int,int>>q;
     
     for(int i=0;i<m;i++){
        //1st col and last col
        if(mat[0][i]=='U'){
            q.push({0,i});
            vis[0][i]=0;
        }
          if(mat[n-1][i]=='D'){
            q.push({n-1,i});
            vis[n-1][i]=0;
        }
     }

     for(int i=0;i<n;i++){
        //1st row and last row
        if(mat[i][0]=='L'){
            q.push({i,0});
            vis[i][0]=0;
        }
        if(mat[i][m-1]=='R'){
            q.push({i,m-1});
            vis[i][m-1]=0;
        }
     }
     
     int xArr[4]={0,0,-1,1};
     int yArr[4]={-1,1,0,0};
            //r,l , d,u
     map<int,char>mpp;
     mpp[0]='R';
     mpp[1]='L';
     mpp[2]='D';
     mpp[3]='U';

     while(!q.empty()){
      int row= q.front().first;
      int col= q.front().second;
      vis[row][col]=0;

      q.pop();

      for(int i=0;i<4;i++){

        int newRow= row+xArr[i];
        int newCol= col+yArr[i];

        if(newRow>=0 && newRow<n && newCol>=0 && newCol<m && mat[newRow][newCol]==mpp[i]){
          q.push({newRow,newCol});     
        }
      } 
     }

      for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           if(mat[i][j]=='?'){
          
            bool flag= false;
            for(int ind=0;ind<4;ind++)
            { int newRow= i+xArr[ind];
              int newCol= j+yArr[ind];
                 if(newRow>=0 && newRow<n && newCol>=0 && newCol<m ){
             if(vis[newRow][newCol]==1){
             
                flag=true;
                
             } 
        }

            }

          if(flag==false) vis[i][j]=0;

           }
        }
     }


     int ans=0;

       for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
   
           ans+=vis[i][j];
        }
      
     }

    
    cout<<ans<<endl;
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