#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
   int n,p;cin>>n>>p;
   int ans=0;
   for(int i=2;i<=n;i++)
   {
   	int x=i;
   	while(x%p==0)
   	{
   
   		ans++;
   		x/=p;
   	}
   	
   }cout<<ans<<'\n';
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	solve();
	return 0;

}

