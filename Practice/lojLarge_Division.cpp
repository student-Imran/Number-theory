#include<bits/stdc++.h>
using namespace std;


#define ff first
#define ss second
#define pb push_back
#define ll long long int
#define all(v) (v).begin(),(v).end()
#define set_bits __builtin_popcountll  

int te;
void solve()
{
	te++;
   string s;
   int a;
   cin>>s>>a;
   cout<<"Case "<<te<<": ";
   int pre=0;
   int i=0;
   if(s[0]=='-')
   {
   	i++;
   }
   if(a<0)
   {
   	a=(-1)*a;
   }

   for(int k=i;k<s.size();k++)
   {

   int	x=s[k]-'0';
   	pre=(1LL*pre*10%a+x)%a;
   	//cout<<pre<<'\n';
   }
   if(pre==0)
   {
   	cout<<"divisible"<<'\n';
   }
   else
   {
   	cout<<"not divisible"<<'\n';
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

