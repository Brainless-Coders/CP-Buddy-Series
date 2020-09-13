/* Here idea is to count the number of set bits in the binary representation of given number 

Example if the number is 5 its binary form is 101 so the ans would be 2 
*/


#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back
#define mod 1000000007
#define endl "\n"
#define len(x) x.size()
#define gcd(a, b) __gcd(a, b)
#define ste(v) v.begin(), v.end()
#define stea(arr, n) arr, arr+n


void solve(){
    // Solve here
    int n;
    cin>>n;
    int ans=0;
    while(n) {
        if(n&1) ans++;
        n>>=1;
    }

    cout<<ans;
}

int32_t main() {
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
