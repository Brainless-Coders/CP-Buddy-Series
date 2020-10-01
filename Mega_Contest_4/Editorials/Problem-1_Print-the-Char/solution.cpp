#include<bits/stdc++.h>
using namespace std;
map<char,int> m;
bool fun(char a, char b){
    if(m[a] > m[b])
        return true;
    else if(m[a] < m[b])
        return false;
    else if(a < b)
        return true;
    return false;
}
int main(){
    string s;
    cin >> s;
    set<char> se;
    for(auto i : s){
        m[i] = m[i] + 1;
        se.insert(i);
    }
    s = "";
    for(auto i : se)
        s = s + i;
    sort(s.begin(),s.end(),fun);
    cout << s;
}
