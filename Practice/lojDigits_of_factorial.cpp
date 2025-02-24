#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
const int N=1e6+9;
double v[N];
void precal()
{
   for(int i=1;i<N;i++)
   {
   	v[i]=v[i-1]+log2(i);
   }
}
int te;
void solve()
{
	int n,b;
	cin>>n>>b;
	te++;
	cout<<"Case "<<te<<": ";
	double ans=v[n];
	ans=ans/log2(b);
	ans+=1;
	cout<<(int)floor(ans)<<'\n';
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

