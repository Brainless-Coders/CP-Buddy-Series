#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin >> t;
    while(t--) {
        string s;
        int ctr = 0, val = 0;
        cin >> s;
        for(int i=0;i<s.size();i++) {
            if(s[i] == '<')
                ctr++;
            else 
                ctr--;
            if(ctr<0)
                break;
            if(ctr==0)
                val = i+1;
        }
        cout << val << endl;
    }
    return 0;
}
