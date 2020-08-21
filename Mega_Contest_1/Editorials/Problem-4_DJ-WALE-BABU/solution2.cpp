#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <limits.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string str;
    cin >> str;

    string s1 ="WUB";
    
    size_t ind = string::npos;
    while((ind =str.find(s1)) != string::npos) {
        str.erase(ind, s1.length());
        if(str.substr(ind, 3) != "WUB")
            str.insert(ind," ");
    }
    size_t beg = str.find_first_not_of(" \t");
    str.erase(0, beg);
    
    beg = str.find_last_not_of(" \t");
    if (string::npos != beg)
         str.erase(beg+1);

    cout << str;
    return 0;
}
