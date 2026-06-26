// Author: Shawn Das Shachin-->(shawn_das)

#include <bits/stdc++.h>
using namespace std;
// using ll =long long;
// using ld = long double;
#define pb push_back
#define mod 1000000007
#define srt(v) sort(v.begin(),v.end())
#define rsrt(v) sort(v.rbegin(),v.rend())
#define OPTIMIZE_IO ios::sync_with_stdio(false); cin.tie(nullptr);
#define setbit(x) __builtin_popcount(x);
#define printp(v) { for(auto &it : v) std::cout << it.first << " " << it.second << std::endl; }
#define printarr(arr) { for(auto &it : arr) std::cout << it << " "; std::cout << std::endl; }

void solve(){
    long long a,b,c;
    cin>>a>>b>>c;
    if(a==b){
        cout<<0<<endl;
        return;
    }
    int k=0;
    while(1){
        long long ga=__gcd(a,c+k);
        long long gb=__gcd(b,c+k);

        if(ga==gb){
            cout<<k+1<<endl;
            return;
        }
        k++;
    }
    

}
int main() {
    // OPTIMIZE_IO;
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}