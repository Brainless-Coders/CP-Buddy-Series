#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;

    string input;
    cin >> input;

    vector<char> v1, v2, ret(n);
    vector<int> i1, i2;

    char curr;
    for(int i=0;i<n;i++) {
        curr = input[i];            
        if (islower(curr)) {
            v1.push_back(curr);
            i1.push_back(i);
        }
        else {
            v2.push_back(curr);
            i2.push_back(i);
        }
    }

    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    int curr1 = 0;
    int i=0, j=0;    
    for(int curr1=0; curr1<n; curr1++) {
        if(i1[i] == curr1) {
            cout<<v1[i];
            i++;
        }
        else {
            cout << v2[j];
            j++;
        }
    }

    cout << endl;

    return 0;
}
