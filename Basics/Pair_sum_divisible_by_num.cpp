#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
   int n,divisor;
   cin>>n>>divisor;
   int a[n];
   for(int i=0;i<n;i++)
   	{
   		int x;
   		cin>>x;
   		a[i]=x%divisor;
   	}
   	map<int,int>m;
    ll ans=0;
   for(int i=0;i<n;i++)
   {
     m[a[i]]++;
     if(a[i]==0)
     {
     	ans+=(m[0]-1);
     }
     else if(m[(divisor-a[i])]>0)
     {
     if(divisor-a[i]==a[i])
     {
         ans+=(m[(divisor-a[i])]-1);
     }
     else
     {
        ans+=m[(divisor-a[i])];
     }
     	
     }
       
   }
   cout<<ans<<'\n';
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

