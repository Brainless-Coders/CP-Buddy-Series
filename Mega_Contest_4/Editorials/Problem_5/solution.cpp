#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll i,j;
    ll y,k,n;
    cin>>y>>k>>n;
    ll temp = y%k;
    i=k-temp;
    bool ans = false;
    for(i;i+y<=n&&i>0;i+=k)
    {
        cout<<i<<" ";
        ans=true;
    }
    if(!ans)
        cout<<"-1";
    cout<<endl;
}

int main()
{
    std::ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    solve();
}

