#include<bits/stdc++.h>
using namespace std;


#define ff first
#define ss second
#define pb push_back
#define ll long long int
#define all(v) (v).begin(),(v).end()
#define set_bits __builtin_popcountll  


void solve()
{
   ll n,m,l,r;
   cin>>n>>m>>l>>r;
   ll k=(n*m)/__gcd(n,m);
 if (k > r) {
        cout << 0 << '\n';
        
    }

   
    ll first = (l + k - 1) / k * k; 
    ll last = (r / k) * k; 
    if (first > last) {
        cout << 0 << '\n';
    } else {
        cout << (last - first) / k + 1 << '\n';
    }
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);


	/*int t;
	cin>>t;
	while(t--)
	*/{
		solve();
	}
	return 0;

}

