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
   ll a,b;
   cin>>a>>b;
   while(1)
   {
   	ll g=__gcd(a,b);
   	if(g==1)
   	{
   		break;
   	}
   	b/=g;
   }
   if(b==1)
   {
   	cout<<"Yes"<<'\n';
   }
   else
   {
    cout<<"No"<<'\n';
   }
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

