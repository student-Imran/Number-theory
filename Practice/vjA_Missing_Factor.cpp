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
   ll x=sqrtl(n);
   while(x*x<n)++x;
   while(x*x>n)--x;
   ll ans=0;
   for(int i=2;i*i<=x;i++)
   {
   	if(x%i==0)
   	{
   		ll x1=i;
   		ans=max(ans,x1);
   		while(x%x1==0)
   		{
   			x/=x1;
   		}
   	}
   }
   if(x!=1)
   {
   	cout<<max(ans,x)<<'\n';
   }
   else
   {
   	cout<<ans<<'\n';
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

