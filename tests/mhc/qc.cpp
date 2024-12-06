#include<bits/stdc++.h> 
using namespace std; 

typedef long long ll; 

const ll MOD = 998244353; 

int main(){ 
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 

    // Open input.txt and output.txt for reading and writing
    ifstream inputFile("substantial_losses_input.txt");
    ofstream outputFile("outputc.txt");

    if (!inputFile || !outputFile) {
        cerr << "Error opening file(s)!" << endl;
        return 1;
    }

    int T; 
    inputFile >> T;  // Read number of test cases from input file
    for (int tc = 1; tc <= T; tc++) { 
        ll W, G, L; 
        inputFile >> W >> G >> L;  // Read W, G, L for each test case
        ll E; 
        if (L > 0) { 
            ll a = (W - G) % MOD; 
            ll b = ((2 * (L % MOD)) + 1) % MOD; 
            E = (a * b) % MOD; 
        } 
        else { 
            E = (W - G) % MOD; 
        } 
        outputFile << "Case #" << tc << ": " << E << "\n";  // Write output to output.txt
    }

    // Close the files
    inputFile.close();
    outputFile.close();

    return 0; 
}
