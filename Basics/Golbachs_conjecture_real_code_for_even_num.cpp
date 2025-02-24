#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 9;

int spf[N];
void sieve() {
  for(int i = 2; i < N; i++) {
    spf[i] = i;
  }
  for(int i = 2; i < N; i++) {
    if (spf[i] == i) {
      for (int j = i; j < N; j += i) {
        spf[j] = min(spf[j], i);
      }
    }
  }
}
bool ok(int n) { // checking if possible
  for (int i = 2; i < n; i++) {
    if (spf[i] == i and spf[n - i] == n - i) {
      return true;
    }
  }
  return false;
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  sieve();
  for (int n = 4; n <= 100000; n += 2) {
    cout<<n<<'\n';
    if (!ok(n)) cout << n << '\n';
  }
  return 0;
}