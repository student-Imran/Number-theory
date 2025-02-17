#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
// For n=1e12 we can solve by using this code
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
	ll num_of_divisors=1;
   for(auto j:primes)
   {
   	 if(x<j*j)
   	 {
   	 	break;
   	 }
   	 else if(x%j==0)
   	 {
   	 	int power_of_prime=0;
   	 	while(x%j==0)
   	 	{
   	 		power_of_prime++;
   	 		x/=j;
   	 	}
   	 	num_of_divisors*=(power_of_prime+1);
   	 }
   }
   if(x>1)
   {
   	num_of_divisors*=(2);
   	return num_of_divisors;
   }
   else
   {
      return num_of_divisors;
   }
  
}
void solve(int te)
{
	ll n;
	cin>>n;
  cout<<"Case "<<te<<": "<<divi(n)<<'\n';
	
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

