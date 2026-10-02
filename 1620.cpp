#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool check(ll mid, ll n, ll t, ll* k) {
    ll sum = 0;

    for (int i = 0; i < n; i++) {
        sum += mid / k[i];

        if (sum >= t) {
            return true;
        }
    }

    return false;
}

ll solve(ll n, ll t, ll* k) {
    ll low = 1;
    ll high = (*min_element(k, k + n)) * t;

    ll ans = high;

    while (low <= high) {
        ll mid = low + (high - low) / 2;

        if (check(mid, n, t, k)) {
            ans = mid;
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    return ans;
}

int main() {
    ll n, t;
    cin >> n >> t;

    ll k[n];

    for (int i = 0; i < n; i++) {
        cin >> k[i];
    }

    cout << solve(n, t, k) << '\n';

    return 0;
}
