#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int te;
void solve()
{
   ll n,q;
   cin>>n>>q;
   ll a[n];
   ll sum=0;
   for(int i=0;i<n;i++)
   {
    cin>>a[i];
    sum+=(n-(i+1))*a[i];
    sum-=(i*a[i]);
   }
   te++;
   cout<<"Case "<<te<<":\n";

   while(q--)
   {
    int op;
    cin>>op;
    if(op==0)
    {
        ll x,v;cin>>x>>v;
        sum-=(n-(x+1))*a[x];
        sum+=(x*a[x]);
        a[x]=v;
        sum+=(n-(x+1))*a[x];
        sum-=(x*v);
        

    }
    else
    {
        cout<<sum<<'\n';
    }
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

