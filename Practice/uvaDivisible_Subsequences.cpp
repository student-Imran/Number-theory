#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
   int d,n;
   cin>>d>>n;
   int a[n];
   for(int i=0;i<n;i++) cin>>a[i];
   ll pr_a[n+1];
   pr_a[0]=0;
   for(int i=1;i<=n;i++)
   {
    pr_a[i]=pr_a[i-1]+a[i-1];
    pr_a[i]=pr_a[i]%d;
   }
   map<ll,int>m;
   ll ans=0;
   for(int i=1;i<=n;i++)
   {
     if(pr_a[i]==0)
     {
        ans++;
        ans+=m[pr_a[i]];
        m[pr_a[i]]++;
     }
     else
     {
        ans+=m[pr_a[i]];
        m[pr_a[i]]++;
     }
    }cout<<ans<<'\n';
   
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

