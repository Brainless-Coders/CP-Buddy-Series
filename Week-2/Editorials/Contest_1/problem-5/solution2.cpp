#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the lilysHomework function below.
int lilysHomework(vector<int> arr) {
    map<int, int> m1, m2;
    for(int i=0;i<arr.size();i++) {
        m1[arr[i]] = i;
        m2[arr[i]] = i;
    }
    vector<int> ascending_vector_v1, v2, descending_vector_v3, v4;
    ascending_vector_v1 = arr;
    v2 = arr;
    descending_vector_v3 = arr;
    v4 = arr;
    sort(ascending_vector_v1.begin(), ascending_vector_v1.end());
    sort(descending_vector_v3.begin(), descending_vector_v3.end(), greater<int>());
    int swapctr_1 = 0, swapctr_2 = 0;
    for(int i=0;i<arr.size();i++) {
        if(ascending_vector_v1[i] != v2[i]) {
            //sorted is v1
            int sorted_index = m1[ascending_vector_v1[i]];
            m1[ascending_vector_v1[i]] = i;
            m1[v2[i]] = sorted_index;
            swap(v2[i], v2[sorted_index]);
            swapctr_1++;
        }   
        if(descending_vector_v3[i] != v4[i]) {
            //sorted is v3
            int d_sorted_index = m2[descending_vector_v3[i]];
            m2[descending_vector_v3[i]] = i;
            m2[v4[i]] = d_sorted_index;
            swap(v4[i], v4[d_sorted_index]);
            swapctr_2++;
        }   
    }
    return min(swapctr_1, swapctr_2);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split_string(arr_temp_temp);

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    int result = lilysHomework(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
