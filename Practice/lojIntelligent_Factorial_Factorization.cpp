#include<bits/stdc++.h>
using namespace std;


#define ff first
#define ss second
#define pb push_back
#define ll long long int
#define all(v) (v).begin(),(v).end()
#define set_bits __builtin_popcountll 
bool is_prime(int x)
{
	if(x==1)return false;
	for(int i=2;i<=x/2;i++)
	{
		if(x%i==0)
		{
			return false;
		}
	}
	return true;
} 


void solve(int test)
{
   
   
   	int n;cin>>n;
   	cout<<"Case "<<test<<": "<<n<<" = ";
   	for(int p=2;p<=n;p++)
   	{
   		if(is_prime(p))
   		{
   			int exp=0;
   			for(int i=2;i<=n;i++)
   			{
   				int y=i;
   				while(y%p==0)
   				{
   					exp++;
   					y/=p;
   				}
   			}
   			if(p!=2)cout<<" * ";
   			cout<<p<<" ("<<exp<<")";
   		}

   	}
   	cout<<'\n';
   

}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);


	int t;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
		solve(i);
	}
	return 0;

}

