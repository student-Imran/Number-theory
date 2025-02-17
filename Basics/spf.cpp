#include<bits/stdc++.h>
using namespace std; 
const int N=1e5;
int spf[N];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    for(int i=2;i<=N;i++)
    {
    	spf[i]=i;
    }
    for(int i=2;i<=N;i++)
    {
    	for(int j=i;j<=N;j+=i)
    	{
    		spf[j]=min(spf[j],i);
    	}
    }
    cout<<spf[30]<<'\n';
 
	

}

