#include <bits/stdc++.h>

using namespace std;

int lowestTriangle(int base, int area){
    // Complete this function
    int h;
    double ht;
    ht=(double)2*area/base;
    //cout<<ht;
    h=ceil(ht);
    return h;
}

int main() {
    int base;
    int area;
    cin >> base >> area;
    int height = lowestTriangle(base, area);
    cout << height << endl;
    return 0;
}
