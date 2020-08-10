/*
Arnab is given a string, but being the evil Lord he is, he has his own whims and fantasies about the string he wants to keep with himself. If he can convert a string into a palindrome by rearranging the characters, he will keep that string, otherwise he will discard that string. You’ve to tell if Arnab will keep that string or not.

Input Format

The first line of input contains the number of test cases T. Each test case contains a single string S.

Constraints

1 <= Number of test cases, T <= 10

1<=|Length of String S|<=100

Output Format

For each test case print Yes if Arnab can convert string into a palindrome by rearranging the characters else print No.

Sample Input 0

3
code
pop
abb
Sample Output 0

No
Yes
Yes
*/


#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        map<char,int> m;
        for(int i = 0; i < s.length(); i++){
            m[s[i]]++;
            m[s[i]] = m[s[i]] % 2;
        }
        // cout << "--------" << endl;
        int count = 0;
        for(auto i = m.begin(); i != m.end(); i++){
            // cout << i->first << " : " << i->second << endl;
            count = count + i -> second;
        }
        // cout << endl;
        if(count == 1 || count == 0){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }
    return 0;
}
