#include<bits/stdc++.h>
using namespace std;


#define ff first
#define ss second
#define pb push_back
#define ll long long int
#define all(v) (v).begin(),(v).end()
#define set_bits __builtin_popcountll  


void solve()
{
   int n;
   cin>>n;
   int two=2;
   int three=3;
   if(n%2==0)
   {
   	cout<<n/2<<'\n';
    for(int i=1;i<=n/2;i++)
    {
    	cout<<two<<" ";
    }cout<<'\n';

   }
   else
   {
      cout<<n/2<<'\n';
      for(int i=1;i<n/2;i++)
      {
      	cout<<two<<" ";
      }cout<<three<<'\n';

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

