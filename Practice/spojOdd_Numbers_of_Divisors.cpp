#include<bits/stdc++.h>
using namespace std;


#define ff first
#define ss second
#define pb push_back
#define ll long long int
#define all(v) (v).begin(),(v).end()
#define set_bits __builtin_popcountll  
const int N=1e5;
int count_divi[N+9];
void precal()
{
	for(ll i=1;i<=N;i++)
	{
		int divi=0;
		ll x=i;
		set<int>se;
		for(ll j=1;j*j<=x;j++)
   	    {
       if(x%j==0)
       {
       	if(j!=x/j)
       	{
          se.insert(j);
          //cout<<j<<'\n';
          se.insert(x/j);
          //cout<<x/j<<'\n';
          se.insert((x*x)/j);
          //cout<<(x*x)/j<<'\n';
          se.insert((x*x)/(x/j));
          //cout<<(x*x)/(x/j)<<'\n';
          se.insert((x*x)/(j*j));
          se.insert(j*j);
          //cout<<j*j<<'\n';
          //cout<<(x*x)/(j*j)<<'\n';
          se.insert((x*x)/((x/j)*(x/j)));
          se.insert((x/j)*(x/j));
          //cout<<(x/j)*(x/j)<<'\n';
          	//cout<<(x*x)/(x/j)*(x/j)<<'\n';
       	  
       	}
       	else
       	{
       		se.insert(j);
       		se.insert((x*x)/j);
       		//cout<<j<<'\n';
       		//cout<<(x*x)/j<<'\n';
       		se.insert((x*x)/(j*j));
       		se.insert(j*j);
       		//cout<<j*j<<'\n';
       		//cout<<(x*x)/(j*j)<<'\n';

       		
       	}
       }
   	}
   	count_divi[i]=se.size();
   }
   //cout<<count_divi[N]<<'\n';
}

void solve()
{
   ll k,l,r;
   cin>>k>>l>>r;
   ll ans=0;
   //cout<<count_divi[l]<<" "<<count_divi[r]<<'\n';
   for(ll i=sqrt(l);i<=sqrt(r);i++)
   {
   	//ll x=i*i;
   	if(count_divi[i]==k)
   	{
   		ans++;
   	}
   }
   cout<<ans<<'\n';
   
   
       	
      
 
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	precal();


	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;

}

