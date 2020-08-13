/*
Adi and the rocks
*/

#include <bits/stdc++.h>
using namespace std; 

void fun(vector<vector<int>>& mat) 
{ 
    int row = mat.size(); 
    int col = mat[0].size(); 

    vector<int> Neg[row]; 
    vector<int> Pos[col]; 

    for (int i = 0; i < row; i++) { 
        for (int j = 0; j < col; j++) { 
        if (j < i) { 
                Neg[i - j].push_back(mat[i][j]); 
            } 
            else if (j > i) { 
                Pos[j - i].push_back(mat[i][j]); 
            } 
            else { 
                Pos[0].push_back(mat[i][j]); 
            } 
        } 
    } 
    for (int i = 0; i < row; i++) { 
        sort(Neg[i].begin(), Neg[i].end(),greater<int>()); 
    } 
    for (int i = 0; i < col; i++) { 
        sort(Pos[i].begin(), Pos[i].end(),greater<int>()); 
    } 

    for (int i = 0; i < row; i++) { 
        for (int j = 0; j < col; j++) { 
            if (j < i) { 
                int d = i - j; 
                int l = Neg[d].size(); 
                mat[i][j] = Neg[d][l - 1]; 
                Neg[d].pop_back(); 
            } 
            else if (j > i) { 
                int d = j - i; 
                int l = Pos[d].size(); 
                mat[i][j] = Pos[d][l - 1]; 
                Pos[d].pop_back(); 
            } 
            else { 
                int l = Pos[0].size(); 
                mat[i][j] = Pos[0][l - 1]; 
                Pos[0].pop_back(); 
            } 
        } 
    } 
}

int main() 
{
    int t;
    cin >> t;
    while(t--){
        int m,n;
        cin >> m >> n;
        vector<vector<int>> a;
        for(int i = 0; i < m; i++){
            vector<int> t;
            for(int j = 0; j < n; j++){
                int x;
                cin >> x;
                t.push_back(x);
            }
            a.push_back(t);
        }
        fun(a);
        for(int i = 0; i < a.size(); i++){
            for(int j = 0; j < a[i].size(); j++){
                cout << a[i][j] << ' ';
            }
            cout << endl;
        }
    }
} 
