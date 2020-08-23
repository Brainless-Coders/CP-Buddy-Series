#include<bits/stdc++.h>
#define ll long long int
using namespace std;


int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<ll> v;
        ll maxi = -999;
        for(int i = 0; i < n; i++){
            ll a;
            cin >> a;
            v.push_back(a);
            maxi = max(maxi,a);
        }
        vector<ll> c;
        c = v;
        map<ll,int> m;
        sort(c.begin(), c.end());
        for(int i = 0; i < v.size(); i++){
            m[c[i]] = i;
        }
        for(int i = 0; i < n; i++){
            if(v[i] != maxi){
                cout << c[m[v[i]]+1] << " ";
            }else{
                cout << "_ ";
            }
        }
        cout << endl;
    }
    return 0;
}
