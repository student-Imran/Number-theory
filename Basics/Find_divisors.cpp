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
   ll n;
   cin>>n;
   vector<ll> v;
   for(ll i=1;i*i<=n;i++)
   {
   	if(n%i==0)
   	{
   	  v.pb(i);
   	  if((n/i)!=i)
   	  {
   	  	v.pb(n/i);
   	  }
   	}
   }
   for(auto divi:v)
   {
   	cout<<divi<<" ";
   }cout<<'\n';
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	solve();
	

}

