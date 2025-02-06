#include<bits/stdc++.h>
using namespace std;


#define ff first
#define ss second
#define pb push_back
#define ll long long int
#define all(v) (v).begin(),(v).end()
#define set_bits __builtin_popcountll  
ll divi(ll k)
{
	int count=0;
   for(ll i=1;i*i<=k;i++)
   {
   	if(k%i==0)
   	{
   	  count++;
   	  if((k/i)!=i)
   	  {
   	  	count++;
   	  }
   	}
   }
   return count;
}

void solve()
{
   int n;
   cin>>n;
   ll  a[n];
   for(int i=0;i<n;i++)cin>>a[i];
   	ll ans=a[0];
   for(int i=1;i<n;i++)
   	{
   		ans=__gcd(a[i],ans);
   	}
   	cout<<divi(ans)<<'\n';

}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);


	/*int t;
	cin>>t;
	while(t--)
	*/
	{
		solve();
	}
	return 0;

}

