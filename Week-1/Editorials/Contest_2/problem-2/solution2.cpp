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
        string input;
        cin >> input;
        int n = input.size();
        int lps[n];
        
        int length = 0;
        lps[0] = 0;
        int i=1;
        while(i<n) {
            if(input[i] == input[length]) {
                length++;
                lps[i] = length;
                i++;
            }
            else {
                if(length != 0) {
                    length = lps[length-1];
                }
                else {
                    lps[i] = 0;
                    i++;
                }
            }
        }
        
        cout << *max_element(lps, lps+n) <<  endl;
    }
    return 0;
}
