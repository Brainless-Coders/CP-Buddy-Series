#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        s+='0';
        int ctr = 0;
        vector<int> v;
        for(int i=0;i<s.size();i++) {
            if(s[i] == '1') {
                ctr++;
            }
            else {
                v.push_back(ctr);
                ctr = 0;
            }
        }
        sort(v.begin(), v.end());
        int max_index = v.size()-1;
        int max_ones = 0;
        while(max_index >= 0) {
            max_ones += v[max_index];
            max_index -= 2;
        }
        cout << max_ones << endl;
    }
    return 0;
}
