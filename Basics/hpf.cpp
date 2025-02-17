#include <bits/stdc++.h>
using namespace std;

const int N = 1e7 + 9;
int hpf[N]; 
bool is_prime[N];


void sieveForHPF() {
    for (int i = 0; i < N; i++) {
        is_prime[i] = true;
        hpf[i] = 1; 
    }
    is_prime[0] = is_prime[1] = false;
    
    for (int i = 2; i < N; i++) {
        if (is_prime[i]) {
            hpf[i] = i;
            for (int j = i + i; j < N; j += i) {
                is_prime[j] = false;
                hpf[j] = max(hpf[j], i);
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sieveForHPF();
    cout << "HPF(1222) = " << hpf[1222] << "\n"; 
    return 0;
}
