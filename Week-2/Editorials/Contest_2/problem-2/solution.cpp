#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define ll long long int
using namespace std;


int main() {
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
        ll c = 0;
        for(ll i = 0;i < n; i++){
            for(ll j = i+1; j < n; j++){
                if(v[i] > v[j]){
                    c = c + 1;
                }
            }
        }
        cout << c << endl;
    }
    return 0;
}
