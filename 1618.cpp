#include <bits/stdc++.h> 
using namespace std; 

void factorial() {  
int n; 
cin >> n;
int z =0; 
while(n>0) {  
  n/=5; 
  z+=n; 


} 

cout << z << endl;
}
  
void solve()  {
factorial();  
} 

int main() { 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
solve();
return 0;}
