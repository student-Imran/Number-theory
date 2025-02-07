#include<bits/stdc++.h>
using namespace std;


#define ff first
#define ss second
#define pb push_back
#define ll long long int
#define all(v) (v).begin(),(v).end()
#define set_bits __builtin_popcountll  
const int N=1e6;
int fre[N+1];
void solve()
{
   int n;
   cin>>n;
   int a[n];
   vector<int>v;
  for(int i=0;i<n;i++)
   	{
   		cin>>a[i];
   		fre[a[i]]++;
   	}
   	for(int i=1;i<=N;i++)
	{
		int c=0;
		for(int j=i;j<=N;j+=i)
		{
			if(fre[j]>0)
			{
				c+=fre[j];
			}
		}v.pb(c);
	}
	for(auto x:v)
	{
       cout<<x<<'\n';
	}
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

