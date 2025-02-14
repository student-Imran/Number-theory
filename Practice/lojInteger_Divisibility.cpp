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
   int n,x;
te++;
   cin>>n>>x;
   int i;
   cout<<"Case "<<te<<": ";
   ll pre=0;
   ll d;
   ll re;
   for(i=1;i>0;i++)
   {
   	 d=pre*10+x;
   	 re=d%n;
   	if(re==0)
   	{
   		break;
   	}
   	pre=d%n;
   	
   }cout<<i<<'\n';
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


