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
        int n = s.size();
        unordered_map<char, int> m1;
        
        for(int i=0;i<n;i++) {
            m1[s[i]]++;
        }
        
        int ctr = 0 ;
        for(auto it:m1) {
            if(it.second > 1) {
                ctr++;
            }
        }
        
        if(ctr >= floor(n/2)) {
            cout<<"Yes"<<endl;
        }
        else {
            cout<<"No"<<endl;
        }
    }
    return 0;
}
