#include <bits/stdc++.h>
using namespace std;

#define read(v) for (auto &x : v) cin >> x

void dnb() {
    int n, m;
    cin >> n >> m;

    multiset<int> h;
    vector<int> t(m);

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        h.insert(x);
    }

    read(t);

    for (int i = 0; i < m; i++) {
        auto it = h.upper_bound(t[i]);

        if (it == h.begin()) {
            cout << -1 << '\n';
        } else {
            --it;
            cout << *it << '\n';
            h.erase(it);
        }
    }
}

int main() {
    dnb();
    return 0;
}
