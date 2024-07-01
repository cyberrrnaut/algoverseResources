#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

class Solution {
private:
    pair<int, int> dfs(int node, int parent, vector<vector<ll>>& adj) {
        pair<int, int> result = {0, node}; // {distance, node}

        for (int neighbor : adj[node]) {
            if (neighbor != parent) {
                pair<int, int> sub_result = dfs(neighbor, node, adj);
                sub_result.first++; // increase distance

                if (sub_result.first > result.first) {
                    result = sub_result;
                }
            }
        }

        return result;
    }

public:
    void cyb3rnaut() {
        int n;
        cin >> n;

        vector<vector<ll>> adj(n + 1); // node indexing starts from 1 

        for (ll i = 1; i < n; i++) {
            ll a, b;
            cin >> a >> b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }

        // First DFS to find the farthest node from any node (say node 1)
        pair<int, int> first_dfs = dfs(1, -1, adj);

        // Second DFS from the farthest node found in the first DFS
        pair<int, int> second_dfs = dfs(first_dfs.second, -1, adj);

        int diameter = second_dfs.first;

        cout <<diameter << endl;
    }
};

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    Solution s;
    s.cyb3rnaut();
    
    return 0;
}
