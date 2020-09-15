#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the handshake function below.
 */
int handshake(int n) {
    /*
     * Write your code here.
     */
    int p=n*(n-1)/2;
    return p;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        int result = handshake(n);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

