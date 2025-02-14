#include<bits/stdc++.h>
using namespace std;


#define ff first
#define ss second
#define pb push_back
#define ll long long int
#define all(v) (v).begin(),(v).end()
#define set_bits __builtin_popcountll  
bool canConstruct(int *a,int c)
{
	int sum=0;
	for(int i=0;i<c;i++)
	{
		int re;
		while(a[i])
		{
			re=a[i]%10;
			a[i]/=10;
			sum+=re;
		}                                                                                                                                                                                                                                                            
	}

	if(sum%3==0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void solve()
{
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++)cin>>a[i];
   	if(canConstruct(a,n))
   	{
   		cout<<"Yes\n";
   	}
   	else
   	{
   		cout<<"No\n";
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

