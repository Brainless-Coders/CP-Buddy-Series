#include<iostream>
#include<map>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        map<int,int> m;
        int n, k;
        cin >> n >> k;
        int a;
        for(int i = 0; i < n; i++){
            cin >> a;
            m[a] = m[a] + 1;
        }
        for(auto i = m.begin(); i != m.end(); i++){
            if(i->second == 1){
                cout << i->first << endl;
                break;
            }
        }
    }
}
