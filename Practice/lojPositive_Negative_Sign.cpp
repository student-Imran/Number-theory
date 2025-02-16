#include<bits/stdc++.h>
using namespace std;


#define ff first
#define ss second
#define pb push_back
#define ll long long int
#define all(v) (v).begin(),(v).end()
#define set_bits __builtin_popcountll  

int te;
void solve()
{
   ll n,m;
   te++;
   cin>>n>>m;
   ll x=n/m;
   m=m*m;
   cout<<"Case "<<te<<": ";
   cout<<1LL*(x/2)*m<<'\n';

}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);


	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;

}

