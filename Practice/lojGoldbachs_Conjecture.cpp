#include<bits/stdc++.h>
using namespace std;


#define ff first
#define ss second
#define pb push_back
#define ll long long int
#define all(v) (v).begin(),(v).end()
#define set_bits __builtin_popcountll  

const int N=1e7+9;
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
   		primes.pb(i);
         
   	}
   }
   //sort(primes.begin(),primes.end());
   

}
int te=0; 
void solve()
{
   int n;
   cin>>n;
   te++;
   cout<<"Case "<<te<<": ";
   int count =0;
   for (auto i:primes)
   {
      int x=n-i;
   
      if(x<0)
      {
         break;
      }
      else if(f[x] and i<=x)
      {
          
         count++;
      }
   }
   cout<<count<<'\n';
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

   sieve();
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;

}
