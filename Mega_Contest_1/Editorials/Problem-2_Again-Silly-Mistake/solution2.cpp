#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string input;
    cin >> input;
    int n = input.size();
    int ct = 0;
    int first_upper = 0;
    
    for(int i=0; i<input.size();i++) {
        if(isupper(input[i])) {
            if(i == 0) {
                first_upper = 1;
            }
            ct++;
        }
    }
    
    if((ct == n) || (first_upper==0 && ct==n-1)) {
        for(int i=1;i<n;i++) {
            input[i] = tolower(input[i]);
        }
        if(isupper(input[0])) {
            input[0] = tolower(input[0]);
        }
        else {
            input[0] = toupper(input[0]);
        }
     }
    cout << input << endl;
    return 0;
}
