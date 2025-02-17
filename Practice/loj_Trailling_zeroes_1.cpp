#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
const int N=1e6;
bitset<N>f;
vector<int>primes;
void sieve()
{
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
   		primes.push_back(i);
   	}
   }

 }
int divi(ll x)
{
	ll ans=1;
   for(auto j:primes)
   {
   	 if(x<j*j)
   	 {
   	 	break;
   	 }
   	 else if(x%j==0)
   	 {
   	 	int count=0;
   	 	while(x%j==0)
   	 	{
   	 		count++;
   	 		x/=j;
   	 	}
   	 	ans*=(count+1);
   	 }
   }
   if(x>1)
   {
   	ans*=(2);
   	return ans-1;
   }
   else
   {
      return ans-1;
   }
  
}
void solve(int te)
{
	ll n;
	cin>>n;
	if(n==1)
	{
		cout<<"Case "<<te<<": "<<0<<'\n';
	}
	else
	{
		cout<<"Case "<<te<<": "<<divi(n)<<'\n';
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	sieve();
	int t;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
		solve(i);
	}
	return 0;

}

