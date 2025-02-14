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
   ll a;
   cin>>a;
   string b;
   cin>>b;
   ll c=0;
   for(int i=0;i<b.size();i++)
   {
   	ll x=b[i]-'0';
   	c=(c*10+x)%a;

   }
   cout<<__gcd(a,c)<<'\n';
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

