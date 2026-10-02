#include <bits/stdc++.h> 
using namespace std; 

void solve() {  
  int n,x;
   cin >> n >> x; 
   vector<int> a(n);
    for(int i = 0; i < n;i++) {  
      cin >> a[i];
    }
  sort(a.begin(),a.end()); 
  int ans = 0; 
  int l =0;
   int r = n-1;  
 while(l<r) {  
   ans++;
   if (a[l]+a[r] <= x) {   
     l++;
     r--;

   } else  {
    r--;
   }


 } 
 if (l==r) {  
   ans++;
 }
 cout << ans << endl;



} 

 int main() {  
   solve();
   return 0;
 }
