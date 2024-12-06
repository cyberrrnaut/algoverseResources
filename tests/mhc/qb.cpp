#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // Open input and output files
    ifstream inputFile("prime_subtractorization_input.txt");
    ofstream outputFile("outputb.txt");

    if (!inputFile || !outputFile) {
        cerr << "Error opening file(s)!" << endl;
        return 1;
    }

    int T;
    inputFile >> T; 
    vector<int> test_cases(T);
    int maxN = 0;

    for (auto &x : test_cases) {
        inputFile >> x; 
        maxN = max(maxN, x); 
    }

    // Sieve of Eratosthenes for prime numbers up to maxN + 2
    vector<bool> sieve(maxN + 3, true);
    sieve[0] = sieve[1] = false;

    for (int i = 2; i * i <= maxN + 2; i++) {
        if (sieve[i]) {
            for (int j = i * i; j <= maxN + 2; j += i)
                sieve[j] = false;
        }
    }

    // Twin primes prefix sum
    vector<int> twin_prefix(maxN + 1, 0);
    for (int i = 2; i <= maxN - 2; i++) {
        twin_prefix[i] = twin_prefix[i - 1] + (sieve[i] && sieve[i + 2] ? 1 : 0);
    }

    // Process each test case
    for (int tc = 1; tc <= T; tc++) {
        int N = test_cases[tc - 1];
        int twin = (N >= 5) ? (twin_prefix[N - 2]) : 0;
        int count = twin + (twin >= 1 ? 1 : 0);

        // Write output to file
        outputFile << "Case #" << tc << ": " << count << "\n";
    }

    // Close the input and output files
    inputFile.close();
    outputFile.close();

    return 0;
}
