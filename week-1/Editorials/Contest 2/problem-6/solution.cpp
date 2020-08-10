/*Given a string s, find the minimum number of changes required to it so that all substrings of the string become distinct.

Note: length of string is atmost 26.

Input Format

The first line contains an integer T, number of test cases. For each testcase there is only one line containing s atmost 26 characters.

Constraints

1 <= T <= 100
1 <= |s| <= 26
Output Format

For each testcase in new line, print the minimum number of changes to the string.

Sample Input 0

3
aab
aebaecedabbee
ab
Sample Output 0

1
8
0
Explanation 0

Testcase 1: If we change one instance of 'a' to any character from 'c' to 'z', we get all distinct substrings.
Testcase 2: We need to change 2 a's, 2 b's and 4 e's to get distinct substrings.
Testcase 3: As no change is required hence 0.
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        map<char,int> m;
        string s;
        cin >> s;
        for(int i = 0; i < s.length(); i++){
            m[s[i]]++;
        }
        // cout << "-----" << endl;
        int count = 0;
        for(auto i = m.begin(); i != m.end(); i++){
            // cout << i->first << " : " << i->second << endl;
            count = count + i->second -1;
        }
        cout << count << endl;
    }
}
