/*
Big Sorting
*/
#include<bits/stdc++.h>
using namespace std;
bool fun(string a,string b){
    int x,y;
    x = a.length();
    y = b.length();
    if(x == y){
        return (a < b);
    }
    return (x < y);
}
int main(){
    long n;
    cin >> n;
    vector<string> v;
    for(long i = 0; i < n; i++){
        string s;
        cin >> s;
        v.push_back(s);
    }
    sort(v.begin(),v.end(),fun);
    for(long i = 0; i < n; i++){
        cout << v[i] << endl;
    }
    return 0;
}
