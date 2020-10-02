#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<int> phi(1000000+ 1);

void phi_1_to_n(int n) {
    phi[0] = 0;
    phi[1] = 1;
    for (int i = 2; i <= n; i++)
        phi[i] = i;

    for (int i = 2; i <= n; i++) {
        if (phi[i] == i) {
            for (int j = i; j <= n; j += i)
                phi[j] -= phi[j] / i;
        }
    }
}

void solve()
{
    ll i,j;
    ll x,y;
    cin>>x>>y;
    if(phi[y]>=phi[x])
        cout<<"Aditya lost it"<<endl;
    else
        cout<<"Aaditya took it"<<endl;
}

int main()
{
    std::ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    phi_1_to_n(1000000);
    ll t;
    cin>>t;
    for(ll tt=1;tt<=t;tt++)
    {
        cout<<"Case "<<tt<<": ";
        solve();
    }
}
