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
 
 
void solve() {
    int n,m;
    cin>>n>>m;
    vector<int>v(n),c(m);
    multiset<int> ml;
    for(int i=0; i<n; i++){
        cin>>v[i];
        ml.insert(v[i]);
    }
    for(int i=0; i<m; i++)cin>>c[i];
 
    srt(v);
 
    for(int i=0; i<m; i++){
        auto it=ml.upper_bound(c[i]);
        if(it==ml.begin()){
            cout<<-1<<endl;
 
        }
        else{
            cout<<*(--it)<<endl;
            ml.erase(it);
        }
    }
}
int main() {
    OPTIMIZE_IO;
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
