//mizoguchi's boilerplate template
#include <bits/stdc++.h>
using namespace std;



using ll  = long long;
using vi  = vector<int>;
using vll = vector<ll>;
using pii = pair<int,int>;
using pll = pair<ll,ll>;




#define pb push_back
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((int)(x).size())
#define rep(i,n) for(int i=0;i<(n);i++)
#define rep1(i,a,b) for(int i=(a);i<=(b);i++)
#define per(i,a,b) for(int i=(a);i>=(b);i--)
#define each(x,a) for(auto &x : a)
#define read(v) for(auto &x : v) cin >> x
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define nl cout << '\n'
const ll INF = 1e18;
const int MOD = 1e9 + 7;
template<typename T>
void print(vector<T>& v){
    for(auto &x : v) cout << x << ' ';
    cout << '\n';
}




void solve() { 
    ll  n; 
    cin >> n; 

    cout << n << " ";

    while (n != 1) {  
        if (n % 2 == 1) { 
            n = n * 3 + 1;
        } 
        else { 
            n /= 2;
        }

        cout << n << " ";
    }

    cout << '\n';
}






int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
