#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mp make_pair
#define pb push_back

bool comp(ll a, ll b) {
    return a>b;
} 

void solve(){
    // Solve here
    string s;
    cin>>s;
    ll l = s.size();
    ll t = 0;
    vector<ll> v;
    for(ll i=0;i<l;i++) {
        if(s[i] == '1'){
            t++;
            while(s[i]==s[i+1] and s[i] == '1' and i<l) {
                i++;
                t++;
            }
        }
        if(t>0) v.pb(t);
        t = 0;
    }

    sort(v.begin(), v.end(), comp);
    ll ans = 0;
    for(int i=0;i<v.size();i+=2) {
        ans+=v[i];
    }
    cout<<ans<<endl;
    v.clear();
}

int main() {
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
