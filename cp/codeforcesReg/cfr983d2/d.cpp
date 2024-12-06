#include<bits/stdc++.h>
using namespace std;
 
int ask(int i, int j) {
    cout << "? " << i << " " << j << endl;
    int x; cin >> x; return x;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int tt; cin >> tt;
 
    while(tt--) {
        int n, index = 2; cin >> n;
 
        vector<int>par(n);
 
        while(index < n && ask(index, 1) == 1) {
            index++;
        }
 
        if(index < n) par[index] = 1;
 
        set<int>parents; 
 
        for(int i = 2; i < index; i++) {
            parents.insert(i);
        }
        
        for(int i = index + 1; i < n; i++) {
            par[i] = i - 1;
 
            vector<int>toErase;
            for(auto &j : parents) {
                toErase.push_back(j);
                if(ask(i, j) == 0) {
                    par[i] = j;
                    break;
                }
            }
 
            for(auto &i : toErase) parents.erase(i);
            if(par[i] != i - 1) parents.insert(i - 1);
        }
 
        cout << "! ";
        for(int i = 1; i < n; i++) cout << par[i] << " ";
        cout << endl;
    }
}