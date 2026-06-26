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
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    srt(v);

    vector<ll> pre_sum(n+1,0);
    pre_sum[0]=v[0];
    if(v[0]>1){
        cout<<1<<endl;
        return;
    }

    for(int i=1; i<n; i++){
        ll cur=pre_sum[i-1];

        if(cur+1 < v[i]){
            cout<<cur+1<<endl;
            return;
        }
        pre_sum[i]=v[i]+pre_sum[i-1];
    }
    cout<<pre_sum[n-1]+1<<endl;
}

int main() {
    OPTIMIZE_IO;
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }
    return 0;
}