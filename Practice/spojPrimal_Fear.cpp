#include<bits/stdc++.h>
using namespace std;


#define ff first
#define ss second
#define pb push_back
#define ll long long int
#define all(v) (v).begin(),(v).end()
#define set_bits __builtin_popcountll  
const int N=1e6+9;
bitset<N>f;
void sieve()
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
   
 }
 bool is_digit_zero(int k)
 {
 	while(k)
 	{
 		if(k%10==0)
 		{
 			return true;
 		}
 	  k=k/10;
 	}
 	return false;
 }
 bool is_valid(int x)
 {
 	//cout<<"isPrime "<<f[x]<<'\n';
 	if(!f[x])
 	{
 		return false;
 	}
 	else if(is_digit_zero(x))
 	{
 		return false;
 	}
 	
 string s=to_string(x);
for(int i=0;i<s.size();i++)
       {
       	string s1=s.substr(i);
       	int y=stoi(s1);
       	if(!f[y])
       {
       	return false;
       }
       }
   return true;
 	
 }
 int valid[N];
 int pre_valid[N];
 void precal()
 {
 	for(int i=1;i<N;i++)
 	{
 		valid[i]=is_valid(i);
 	}
 	for(int i=1;i<N;i++)
 	{
 		pre_valid[i]=pre_valid[i-1]+valid[i];
 	}
 }
void solve()
{
	int n;
	cin>>n;
   cout<<pre_valid[n]<<'\n';
   
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    sieve();
    precal();

	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;

}

