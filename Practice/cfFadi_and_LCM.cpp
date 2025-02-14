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
   ll x;
   cin>>x;
   
    ll ans;
   ll maxi=1e15;
   
   ll final_a=1e14,final_b=1e14;
   for(ll i=1;i*i<=x;i++)
   {
   	if(x%i==0)
   	{
   		ll a=i;
   		ll b=x/i;
   		 ll gc=__gcd(a,b);
   	if(gc==1)
   	 {
   	 	if(max(a,b)<maxi)
   	 	{
         maxi=max(a,b);
   	 	final_a=a;
   	 	final_b=b;
   	 	}
   	 	
   	 }

   	}
   }cout<<final_a<<" "<<final_b<<'\n';
    
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

