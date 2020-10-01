#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    map<char,int> m;
    for(auto i : s)
        m[i] += 1;
    map<int,string> a;
    for(auto i = m.begin(); i != m.end(); i++){
        a[i->second] += i->first;
    }
    for(auto i = a.begin(); i != a.end(); i++){
        sort(a[i->first].begin(), a[i->first].end());
    }
    string ans = "";
    for(auto i = a.rbegin(); i != a.rend(); i++){
        ans = ans + i->second;
    }
    cout << ans;
    return 0;
}
