#include <bits/stdc++.h> 
using namespace std; 

void solve() { 

int n; cin>>n; 
  
 for(long long  k = 1; k<=n; k++) { 
   long long  a = (k*k*(k*k - 1))/2; 
   long long  b = 4*(k-1)*(k-2);
   cout << a - b  << endl;

 }
} 
int main() { 
solve(); return 0;}
