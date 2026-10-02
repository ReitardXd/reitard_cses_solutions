#include <bits/stdc++.h> 
using  namespace std; 

void solve() {
  int n;
  cin >> n; 
  vector<int> a(n+1);  
  for(int i =1; i<=n;i++) {   
    int x; 
    cin >> x;
    a[x] = i;

  } 
  int ans = 1;  
  for(int x = 2; x<=n;x++)   { 
    if (a[x]<a[x-1]) {  
      ans++;
    }

  } 
  cout << ans << endl;
} 

int main() { 
 
 solve();
 return 0;

}
