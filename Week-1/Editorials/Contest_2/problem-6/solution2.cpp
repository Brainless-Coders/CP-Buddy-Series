#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        
        int ctr = 0;
        unordered_map<char, int> m1;
        
        for(int i=0;i<s.size();i++) {
            m1[s[i]]++;
        }
        
        for(auto it:m1) {
            if(it.second > 1) {
                ctr += it.second-1;
            }
        }
        
        cout << ctr << endl;
    }
    return 0;
}
