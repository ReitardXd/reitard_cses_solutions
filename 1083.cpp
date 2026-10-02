#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    unordered_set<int> ns;

    for (int i = 0; i < n - 1; i++) {
        int x;
        cin >> x;
        ns.insert(x);
    }

    for (int i = 1; i <= n; i++) {
        if (ns.find(i) == ns.end()) {
            cout << i << '\n';
            return 0;
        }
    }

    return 0;
}
