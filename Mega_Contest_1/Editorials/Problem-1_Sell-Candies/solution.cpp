#include<iostream>
#include<algorithm>
#include<vector>
#define ll long long int
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll> v;
        for(ll i = 0; i < n; i++){
            ll a;
            cin >> a;
            v.push_back(a);
        }
        sort(v.begin(),v.end(),greater<ll>());
        ll profit = 0;
        ll zero = 0;
        for(ll i = 0; i < n; i++){
            v[i] = v[i] - i;
            profit = profit + max(v[i],zero);
        }
        cout << profit << endl;
    }
}
