#include<bits/stdc++.h>
using namespace std;
const int N=1e9+10;
int check(int num){
  int count=0;
  while(num>0){
    num=num/5;
    count+=num;
  }return count;
}
void solve()
{
   int n;cin>>n;
   int l=0,r=N;
   int ans=-1;
   while(l<=r){
    int mid=l+(r-l)/2;
    if(check(mid)>=n){
      r=mid-1;
      ans=mid;
    }
    else{
         l=mid+1;
    }
   }if(ans==-1){
    cout<<0<<'\n';
   }
   else if(check(ans)>n){
    cout<<0<<'\n';
   }
  else{
    int i;
    for(i=ans+1;i>-1;i++){
      if(check(i)==n){
          continue;
      }
      else{
        break;
      }
    }cout<<i-ans<<'\n';
    for(int j=ans;j<i;j++){
      cout<<j<<" ";
    }cout<<'\n';
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

