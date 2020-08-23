#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define ll long long int
int p = 1;
using namespace std;
void fun(ll x, ll n){
    cout << x << " ";
    x = p > 0 ? x - 5 : x + 5;
    if(x != n){
        if(x <= 0){
            p = 0;
        }
        fun(x,n);
    }else{
        cout << x << endl;
    }
}

int main() {
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        p = 1;
        if(n == 0){
            cout << n << endl;
        }else{
            fun(n,n);
        }
    }
    return 0;
}
