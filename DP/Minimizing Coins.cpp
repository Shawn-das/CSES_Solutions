// Author: Shawn Das Shachin-->(shawn_das)

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
#define pb push_back
#define mod 1000000007
#define srt(v) sort(v.begin(),v.end())
#define rsrt(v) sort(v.rbegin(),v.rend())
#define OPTIMIZE_IO ios::sync_with_stdio(false); cin.tie(nullptr);
#define setbit(x) __builtin_popcount(x);
#define printp(v) { for(auto &it : v) std::cout << it.first << " " << it.second << std::endl; }
#define printarr(arr) { for(auto &it : arr) std::cout << it << " "; std::cout << std::endl; }

void solve(){
    ll n,x;
    cin>>n>>x;
    vector<ll> v(n);
    for(int i=0; i<n; i++)cin>>v[i];

    vector<ll> dp(x+1,1e18);

    dp[0]=0;
    for(int i=1; i<=x; i++){
        for(int j=0; j<n; j++){
            if(v[j]<=i){
                dp[i]=min(dp[i],1+dp[i-v[j]]);
            }
        }
    }
    if(dp[x]==1e18)cout<<-1<<endl;
    else cout<<dp[x]<<endl;
}
int main() {
    OPTIMIZE_IO;
    solve();
    return 0;
}