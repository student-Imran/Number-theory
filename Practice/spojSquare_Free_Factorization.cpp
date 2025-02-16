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
   int n;
   cin>>n;
   int ans=-1;
   for(int i=2;i*i<=n;i++)
   {
   	if(n%i==0)
   	{
   		int x=i;
   		int c=0;
   		while(n%x==0)
   		{
   			c++;
   			n/=x;
   		}
   		ans=max(ans,c);

   	}
   }
   if(ans==-1)
   {
   	cout<<1<<'\n';
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


	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;

}

