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
    int n;
    cin>>n;

    vector<int> ans(n+1);
    ans[0]=1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=6; j++){
            if(j>i)break;
            ans[i]+=ans[i-j];
            ans[i]%=1000000007;
        }
    }
    cout<<ans[n]<<endl;
}
int main() {
    OPTIMIZE_IO;
    solve();
    return 0;
}