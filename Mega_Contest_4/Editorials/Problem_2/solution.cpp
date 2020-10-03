#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll i,j;
    ll n,m,k,l;
    cin>>n>>m>>k>>l;
    ll temp = l+k;
    temp = (temp+m-1)/m;
    if(temp*m>n)
        cout<<"-1\n";
    else
        cout<<temp<<"\n";
}

int main()
{
    std::ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    solve();
}

