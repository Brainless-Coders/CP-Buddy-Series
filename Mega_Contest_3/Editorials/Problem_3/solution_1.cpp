/* If the total number of occurrences of some character c is not a multiple of n, then it is impossible to make all n strings equal — because then it is impossible for all n strings to have the same number of c.

So we have to count the number of occurences of the character and check if it is a multiple of n or not 
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mp make_pair
#define pb push_back

void solve(){
    // Solve here
    int n;
    cin>>n;

    map<char, int> mp;

    for(int i=0;i<n;i++) {
        string s;
        cin>>s;

        for(auto i:s) {
            mp[i]++;
        }
    }

    bool flag = false;
    for(auto i:mp) {
        if(i.second%n) {
            cout<<"NO\n";
            flag = true;
            break;
        }
    }
    if(!flag) cout<<"YES\n";
}

int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
