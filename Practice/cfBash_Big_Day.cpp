#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const int N = 1e5 + 9;
int spf[N];

void s_pf() {
    for (int i = 2; i < N; i++) {
        spf[i] = i;
    }
    for (int i = 2; i < N; i++) {
        if (spf[i] == i) { 
            for (int j = i + i; j < N; j += i) {
                if (spf[j] == j) { 
                    spf[j] = i;
                }
            }
        }
    }
}

void solve() {
    int n;
    cin >> n;

    int a[n];
    int gc = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        gc = __gcd(gc, a[i]);
    }

    if (gc != 1) {
        cout << n << '\n';
        return;
    }

    int hash[N] = {0};
    int ans = 0;

    for (int i = 0; i < n; i++) {
        while (a[i] > 1) {
            int p = spf[a[i]];
            hash[p]++;
            ans = max(ans, hash[p]);

            while (a[i] % p == 0) {
                a[i] /= p;
            }
        }
    }

    cout << max(ans,1) << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    s_pf();
    solve();
    return 0;
}
