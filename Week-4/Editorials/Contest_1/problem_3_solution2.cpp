#include <bits/stdc++.h>

using namespace std;

// Complete the isBalanced function below.
string isBalanced(string s) {
    stack<char> s1;
    int flag = 0;
    map<char, char>m1;
    m1[')']  ='(';
    m1[']'] = '[';
    m1['}'] = '{';
    for(int i=0;s[i]!='\0';i++) {
        if(s[i]=='{' || s[i]=='[' || s[i]=='(') {
            s1.push(s[i]);
        }
        else {
            if(!s1.empty() && m1[s[i]]==s1.top()) 
                s1.pop();
            else {
                flag=1;
                break;
            }
        }
    }

    if(!flag && s1.empty()) {
        return "YES";
    }
    else {
        return "NO";
    }

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string s;
        getline(cin, s);

        string result = isBalanced(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
