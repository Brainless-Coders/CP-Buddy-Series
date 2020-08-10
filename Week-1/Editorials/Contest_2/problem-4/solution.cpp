/*
Given a string S consisting of uppercase and lowercase characters. The task is to sort uppercase and lowercase letters separately such that if the ith place in the original string had an Uppercase character then it should not have a lowercase character after being sorted and vice versa.

Input Format

First line will contain N length of the string. Next line will be the string.

Constraints

1 ≤ N ≤ 10^3

Output Format

Print the sorted string

Sample Input 0

12
defRTSersUXI
Sample Output 0

deeIRSfrsTUX
Explanation 0

Sorted form of given string with the same case of character as that in original string is deeIRSfrsTUX

Sample Input 1

6
srbDKi
Sample Output 1

birDKs
Explanation 1

Sorted form of given string with the same case of character will result in output as birDKs.
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    string l,u;
    for(int i = 0; i < s.length(); i++){
        int k = s[i];
        if(k >= 97 && k <= (97+26))
            l = l + s[i];
        else
            u = u + s[i];
    }
    sort(l.begin(),l.end());
    sort(u.begin(),u.end());
    // cout << l << endl << u;
    int a = 0,b = 0;
    for(int i = 0; i < s.length(); i++){
        int k = s[i];
        if(k >= 97 && k <= (97+26)){
            cout << l[a];
            a = a + 1;
        }else{
            cout << u[b];
            b = b + 1;
        }
    }
    return 0;
}
