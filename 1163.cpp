#include <bits/stdc++.h>  
using namespace std; 
#define ll long long 


void solve() {    
  ll x,n; 
  cin >> x >> n; 
  vector<ll> a(n);
    for(int i = 0; i<n;i++){ 
    cin >> a[i];  
    } 
   
    set<ll> lights;
    multiset<ll> lengths; 
    lights.insert(0);
    lights.insert(x);
    lengths.insert(x);
    int i = 0;
    while(i<n) {   
      ll p = a[i];
      auto right = lights.lower_bound(p);
      auto left = prev(right);
        ll oldLength = *right - *left;

        lengths.erase(lengths.find(oldLength));

        lengths.insert(p - *left);
        lengths.insert(*right - p);

        lights.insert(p);

        cout << *lengths.rbegin() << " ";

        i++;
    }

    cout << '\n';
}

int main()  {  
  solve();
  return 0;
};
