#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool cmp(pair<ll,ll> a, pair<ll,ll> b)
{
    if(a.first==b.first)
        return a.second<b.second;
    return a.first>b.first;
}

void solve()
{
    ll i,j;
    string s;
    cin>>s;
    vector<pair<ll,ll>> v(26);
    for(i=0;i<26;i++)
        v[i].second=i;
    for(auto i:s)
        (v[i-'a'].first)++;
    sort(v.begin(),v.end(),cmp);
    for(auto i:v)
    {
        if(i.first==0)
            break;
        char c = i.second+'a';
        cout<<c;
    }
    cout<<endl;
}

int main()
{
    std::ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    solve();
}

