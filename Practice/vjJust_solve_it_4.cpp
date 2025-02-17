#include<bits/stdc++.h>
using namespace std;

#define ll long long



void solve() {
    ll n, m, l, r;
    cin >> n >> m >> l >> r;

    ll g = __gcd(n, m);
    ll k = (n / g) * m;  
    
    
    if (k < n || k < m) {  
        cout << 0 << '\n';
        return;
    }

    if (k > r) {
        cout << 0 << '\n';
        return;
    }

    ll ans = (r / k) - ((l - 1) / k);
    cout << max(ans, 0LL) << '\n';  
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}