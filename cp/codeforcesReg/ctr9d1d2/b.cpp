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
        string str;
        cin >> str;

        int n = str.length();

        if (n == 1) {
            cout << -1 << endl;
            return;
        }

        if (n == 2) {
            if (str[0] == str[1]) {
                cout << str << endl;
            } else {
                cout << -1 << endl;
            }
            return;
        }

        if (n == 3) {
            for (int i = 1; i < n; i++) {
                if (str[i] == str[i - 1]) {
                    cout << str[i] << str[i - 1] << endl;
                    return;
                }
            }
            set<char> st;
            for (char c : str) {
                st.insert(c);
            }

            if (st.size() == 3) {
                for (auto it : st) {
                    cout << it;
                }
                cout << endl;
            } else {
                cout << -1 << endl;
            }
            return;
        }

        // Sliding window for n > 3
        for (int i = 1; i < n; i++) {
            if (str[i] == str[i - 1]) {
                cout << str[i] << str[i - 1] << endl;
                return;
            }
        }

        set<char> st;
        st.insert(str[0]);
        st.insert(str[1]);
        st.insert(str[2]);

        if (st.size() == 3) {
            for (int j=0;j<=2;j++) {
                    cout << str[j];
                }
            cout << endl;
            return;
        }

        for (int i = 3; i < n; i++) {
            // Slide the window
            auto it = st.find(str[i - 3]);
            if (it != st.end()) {
                st.erase(it);
            }
            st.insert(str[i]);

            if (st.size() == 3) {
                for (int j=i-2;j<=i;j++) {
                    cout << str[j];
                }
                cout << endl;
                return;
            }
        }

        cout << -1 << endl;
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