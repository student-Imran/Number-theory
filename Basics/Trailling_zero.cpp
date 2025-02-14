#include<bits/stdc++.h>
using namespace std;


#define ff first
#define ss second
#define pb push_back
#define ll long long int
#define all(v) (v).begin(),(v).end()
#define set_bits __builtin_popcountll
int trailling_zero(int x)
{
	int count=0;
	if(x<5)
	{
		return count;
	}
	else
	{
		for(int i=5;i<=x;i*=5)
		{
			count+=x/i;

		}
	}
	return count;
}  


void solve()
{
   int n;
   cin>>n;
   cout<<"Count of trailing 0s in "<<n<<"! is "<<trailling_zero(n)<<'\n';
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

