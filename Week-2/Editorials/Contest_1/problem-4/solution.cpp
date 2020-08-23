/* Find the Median */
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        v.push_back(a);
    }
    
    sort(v.begin(),v.end());
    int size = v.size();
    int k = size/2;
    cout << v[k];
    return 0;    
}
