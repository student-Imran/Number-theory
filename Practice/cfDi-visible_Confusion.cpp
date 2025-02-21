#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
void solve()
{
    int n;cin>>n;
    int a[n];
    int x=1;
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
      ma[a[i]]++;
    }
    if(a[0]%2==0)
    {
    	cout<<"NO\n";
    }
    else
    {
    	for(auto x:primes)
    	{
    		for(int i=1;i<n;i++)
    		{
    			if(a[i]%x==0)
    			{
    				                                                                                                                                                                                                                                                
    			}
    		}
    	}
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

