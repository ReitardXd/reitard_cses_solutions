#include <bits/stdc++.h>
using namespace std; 

void solve() {   
  int n; 
  cin >> n; 
  vector<int> a(n); 
  for(int i = 0 ;i<n;i++) {  
    cin >> a[i];
  } 
  set<int> unique;
  int l  = 0;
  int ans = 0; 
  for(int r=0;r<n;r++) { 
     while(unique.count(a[r])) {  
       unique.erase(a[l]);
       l++;
     } unique.insert(a[r]);
     ans = max(ans,r-l+1);
  } 
  cout << ans << endl;
} 


int main() {  
  solve();
  return 0;

}
