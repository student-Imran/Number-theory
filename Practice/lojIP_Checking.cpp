#include<bits/stdc++.h>
using namespace std;


#define ff first
#define ss second
#define pb push_back
#define ll long long int
#define all(v) (v).begin(),(v).end()
#define set_bits __builtin_popcountll  

int binaryToDecimal(int n)
{
    int num = n;
    int dec_value = 0;
    int base = 1;

    int temp = num;
    while (temp) {
        int last_digit = temp % 10;
        temp = temp / 10;

        dec_value += last_digit * base;

        base = base * 2;
    }

    return dec_value;
}


int te;
void solve()
{
   int a,b,c,d;
   int a1,b1,c1,d1;
   char dot;
   te++;
   cout<<"Case "<<te<<": ";
   cin>>a>>dot>>b>>dot>>c>>dot>>d;
   cin>>a1>>dot>>b1>>dot>>c1>>dot>>d1;
   int x,y,z,w;
   x=binaryToDecimal(a1);
   y=binaryToDecimal(b1);
   z=binaryToDecimal(c1);
   w=binaryToDecimal(d1);
   if(a!=x||b!=y||c!=z||d!=w)
   {
    cout<<"No\n";
   }
   else
   {
    cout<<"Yes\n";
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

