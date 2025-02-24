#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const int N=1e6;

bool ok[N+9];
int d[N+9];
void divi()
{
	for(int i=1;i<=N;i++)
	{
		for(int j=i;j<=N;j+=i)
		{
			d[j]++;
		}
	}
	for(int i=1;i<=N;i++)
	{
		ok[i]=true;
	}
	for(int i=1;i<=N;i++)
	{
		for(int j=i;j<=N;j+=i)
		{
			if(d[j]%d[i]!=0)
			{
				ok[j]=false;
			}
		}
	}
	vector<int>ans;
	for(int i=1;i<=N;i++)
	{

			if(ok[i] and d[i]>3)
			{
				ans.push_back(i);
			}
	
	}
	
	for(int i=107;i<ans.size();i+=108)
	{
		cout<<ans[i]<<'\n';
	}
}
void solve()
{
   divi();
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	solve();
	
	return 0;

}

