#include<bits/stdc++.h>
using namespace std;


#define ff first
#define ss second
#define pb push_back
#define ll long long int
#define all(v) (v).begin(),(v).end()
#define set_bits __builtin_popcountll  
int isprime(int k)
{
    for(int i=2;i*i<=k;i++)
    {
        if(k%i==0)
        {
            return false;
        }
    }
    return true;
}
void solve()
{
   int n;cin>>n;
   
    if(isprime(n))
    {
     cout<<1<<'\n';
    }
    else if(n%2==0)
    {
        cout<<2<<'\n';
    }
    else
    {
        if(isprime(n-2))
        {
            cout<<2<<'\n';
        }
        else
        {
            cout<<3<<'\n';
        }
    }
   
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
   
    return 0;

}

