#include<bits/stdc++.h>
using namespace std;


#define ff first
#define ss second
#define pb push_back
#define ll long long int
#define all(v) (v).begin(),(v).end()
#define set_bits __builtin_popcountll  

const int N=1e8;
bitset<N>f;
void solve()
{
   vector<int>primes;

   f[1]=false;
   for(int i=2;i<N;i++)
   {
   	f[i]=true;
   }
   for(int i=2;i*i<N;i++)
   {
   	if(f[i])
   	{
   	for(int j=i+i;j<N;j+=i)
   	{
   		f[j]=false;
   	}
   }
   }
   for(int i=2;i<N;i++)
   {
   	if(f[i])
   	{
   		primes.pb(i);
   	}
   }
   for(int i=0;i<primes.size();i+=100)
   {
   	cout<<primes[i]<<'\n';
   }

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

