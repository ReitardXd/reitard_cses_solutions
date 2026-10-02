#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n;
    cin >> n;

    ll ts = 1LL * n * (n + 1) / 2;

    if (ts % 2 != 0) {
        cout << "NO\n";
        return;
    }

    cout << "YES\n";

    vector<int> s1, s2;
    ll target = ts / 2;
    ll sum = 0;

    vector<int> vis(n + 1, 0);

    for (int i = n; i >= 1; i--) {
        if (sum + i <= target) {
            s1.push_back(i);
            sum += i;
            vis[i] = 1;
        }
    }

    for (int i = 1; i <= n; i++) {
        if (!vis[i]) {
            s2.push_back(i);
        }
    }

    cout << s1.size() << "\n";
    for (int x : s1) cout << x << " ";
    cout << "\n";

    cout << s2.size() << "\n";
    for (int x : s2) cout << x << " ";
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}
