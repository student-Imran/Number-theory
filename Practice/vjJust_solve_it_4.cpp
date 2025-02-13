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
   ll count=0;
   for(int i=1;i>0;i++)
   {
   	ll x=k*i;
   	if(x>r)
   	{
   		break;
   	}
   	if(x>=l and x<=r)
   	{
   		count++;
   	}
   }cout<<count<<'\n';
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

