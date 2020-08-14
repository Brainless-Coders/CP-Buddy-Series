#include <bits/stdc++.h>
#include <string>
#include <cstring>
using namespace std;

bool comparator (string &left, string &right) {
    if(left.size() == right.size())
        return left < right;
    else
        return left.size() < right.size();
}

// Complete the bigSorting function below.
vector<string> bigSorting(vector<string> unsorted) {
    sort(unsorted.begin(), unsorted.end(), comparator);
    return unsorted;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<string> unsorted(n);

    for (int i = 0; i < n; i++) {
        string unsorted_item;
        getline(cin, unsorted_item);

        unsorted[i] = unsorted_item;
    }

    vector<string> result = bigSorting(unsorted);

    for (int i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}
