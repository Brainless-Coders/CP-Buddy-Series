/*
Given a string of character, find the length of longest proper prefix which is also a proper suffix. Example: S = abab lps is 2 because, ab.. is prefix and ..ab is also a suffix.

Input Format

First line is T number of test cases. 1<=T<=100. Each test case has one line denoting the string of length less than 100000.

Constraints

1<=T<=100
Output Format

Print length of longest proper prefix which is also a proper suffix.

Sample Input 0

2
abab
aaaa
Sample Output 0

2
3
Explanation 0

S = abab lps is 2 because, ab.. is prefix and ..ab is also a suffix.
*/

#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int t; 
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n = s.length();
        int f = 0;
        int size = 1;
        while(size != n){
            string prefix = "";
            string suffix = "";
            prefix = s.substr(0,size);
            suffix = s.substr(n-size,size);
            // cout << "prefix : " << prefix << " suffix : " << suffix << endl;
            if(prefix == suffix){
                f = size;
            }
            size = size + 1;
        }
        cout << f << endl;
    }
}
