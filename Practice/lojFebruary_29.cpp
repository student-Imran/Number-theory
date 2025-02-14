#include<bits/stdc++.h>
using namespace std;

#define ll long long int

ll leapYears(ll Y) {
    return Y/4 - Y/100 + Y/400;
}

int te = 0;
void solve() {
    te++;
    cout << "Case " << te << ": ";
    string s, s1;
    int day, day1, year, year1;
    char comma, comma1;
    cin >> s >> day >> comma >> year;
    cin >> s1 >> day1 >> comma1 >> year1;
    
   
    int start_year = year;
    if(s != "January" && s != "February") start_year++;
    else if(s == "February" && day > 29) start_year++;
    
    int end_year = year1;
    if(s1 == "January") end_year--;
    else if(s1 == "February" && day1 < 29) end_year--;
    
    ll ans = 0;
    if(start_year > end_year) ans = 0;
    else ans = leapYears(end_year) - leapYears(start_year - 1);
    
    cout << ans << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
