/*
Steve has a string of lowercase characters in range ascii[‘a’..’z’]. He wants to reduce the string to its shortest length by doing a series of operations. In each operation he selects a pair of adjacent lowercase letters that match, and he deletes them. For instance, the string aab could be shortened to b in one operation.

Steve’s task is to delete as many characters as possible using this method and print the resulting string. If the final string is empty, print "Empty String"

Input Format

A single string, s

Constraints

1<=s<=100

Output Format

If the final string is empty, print Empty String; otherwise, print the final non-reducible string.

Sample Input 0

aaabccddd
Sample Output 0

abd
Sample Input 1

aa
Sample Output 1

Empty String
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    map<char,int> m;
    for(int i = 0; i < s.length(); i++){
        m[s[i]]++;
    }
    string r = "";
    for(auto i = m.begin(); i != m.end(); i++){
        if(i -> second % 2 != 0){
            r = r + i -> first;
        }
    }
    if(r.length() != 0){
        cout << r;
    }else{
        cout << "Empty String";
    }
    return 0;
}
