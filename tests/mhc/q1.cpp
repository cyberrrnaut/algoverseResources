#include <bits/stdc++.h>

using namespace std;


typedef long long ll;

class Solution {
    public:
   
    void cyb3rnaut(){
     ll n;
     cin>>n;
     
     vector<pair<ll,ll>> arr;
     
     for(int i=0;i<n;i++){
        ll a1,a2;
        cin>>a1>>a2;

        arr.push_back({a1,a2});

     }

     





    }
};

int main() {
    ifstream inputFile("subsonic_subway_validation_input.txt");  // Open input file
    ofstream outputFile("output1.txt"); // Open output file

    if (!inputFile) {
        cerr << "Error opening input file!" << endl;
        return 1;
    }
    
     
     Solution s;
     int t;
     cin>>t;

    for(int i=1;i<=t;i++){
       cout<< "Case #"<<i;
         s.cyb3rnaut();
    }

    // Close file streams
    inputFile.close();
    outputFile.close();
    
    return 0;
}
