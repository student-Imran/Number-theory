#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
   ll n,a,b,p,q;cin>>n>>a>>b>>p>>q;
   ll lcm=a*b/__gcd(a,b);
   ll ans=(n/lcm)*(max(p,q));
   ans+=((n/a)-(n/lcm))*p;
   ans+=((n/b)-(n/lcm))*q;
   cout<<ans<<'\n';
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
     solve();
	
	return 0;

}

