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

bool comp(pair<int,int> a,pair<int,int>b){
    return a.second<b.second;
}

void solve(){
    int n;
    cin>>n;
    vector<pair<int,int>> vp;
    while(n--){
        int a,b;
        cin>>a>>b;
        vp.pb({a,b});
    }
    //printp(vp);
    int ans=1;
    sort(vp.begin(),vp.end(),comp);
    //printp(vp);

    int curr=vp[0].first, maxi=vp[0].second;
    for(int i=1; i<vp.size(); i++){
        if(vp[i].first >= maxi){
            ans++;
            curr=vp[i].first;
            maxi=vp[i].second;
        }
    }
    cout<<ans<<endl;
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