#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    map<char,int> m;
    for(int i = 0; i < s.length(); i++){
        m[s[i]]++;
    }
    string r = "";
    for(auto i = m.begin(); i != m.end(); i++){
        if(i -> second % 2 != 0){
            r = r + i -> first;
        }
    }
    if(r.length() != 0){
        cout << r;
    }else{
        cout << "Empty String";
    }
    return 0;
}
