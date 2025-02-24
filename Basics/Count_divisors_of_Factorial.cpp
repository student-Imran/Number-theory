#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
const int N=1000;
bitset<N>f;
vector<int>primes;
void sieve(int N)
{
   

   f[1]=false;
   for(int i=2;i<=N;i++)
   {
   	f[i]=true;
   }
   for(int i=2;i*i<=N;i++)
   {
   	if(f[i])
   	{
   	for(int j=i+i;j<=N;j+=i)
   	{
   		f[j]=false;
   	}
   }
   }
   for(int i=2;i<=N;i++)
   {
   	if(f[i])
   	{
   		primes.pb(i);
   	}
   }
 }


void solve()
{
   int n;
   cin>>n;
   sieve(n);
   long long ans=1;
   for(int i=0;i<primes.size();i++)
   {
   	int p=primes[i];
   	cout<<p<<'\n';
   	int k=n;
   	int pw=0;
   	while(k)
   	{
   		pw+=k/p;
   		k/=p;
   	}
   	ans*=(pw+1);
   }cout<<ans<<'\n';
 
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	solve();
	
	return 0;

}

