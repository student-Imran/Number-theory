#include<bits/stdc++.h>
using namespace std;


#define ff first
#define ss second
#define pb push_back
#define ll long long int
#define all(v) (v).begin(),(v).end()
#define set_bits __builtin_popcountll  

const int N=2e7+9;
bitset<N>f;
vector<pair<int,int>>twin_p;
void solve()
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
      	if(f[i]&&f[i+2])
      	{
      		twin_p.pb(make_pair(i,i+2));
      	}
      }
    
   
   
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    solve();
    int k;
    while(cin>>k)
    {
    	cout<<"("<<twin_p[k-1].first<<", "<<twin_p[k-1].second<<")"<<'\n';

    }
	return 0;

}

