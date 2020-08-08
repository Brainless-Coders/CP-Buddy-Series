// Analysis 
// Space : O(1) => Constant
// Constant space we are only using the given array this type of algo is also known as inplace

// Time : O(N) => Linear 
// Linear since we are only traversing full array only once 

#include <bits/stdc++.h>
using namespace std;

vector<string> split_string(string);

// Complete the reverseArray function below.
vector<int> reverseArray(vector<int> a) {
   
    // setting two pointers 
    // start at the beginning element of the array
    // end at the ending element of the array

    int start = 0, end = a.size() - 1;
    int temp;
    
    // if both the pointers cross each other terminate the while loop
    while(start < end)
        {
            // login for swapping both the pointers using temprary variable
           temp = a[start];
           a[start] = a[end];
           a[end] = temp;
         
           start++; // increment the first pointer
           end--; // decrement the last pointer
        }
  
    return a;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int arr_count;
    cin >> arr_count;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split_string(arr_temp_temp);

    vector<int> arr(arr_count);

    for (int i = 0; i < arr_count; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    vector<int> res = reverseArray(arr);

    for (int i = 0; i < res.size(); i++) {
        fout << res[i];

        if (i != res.size() - 1) {
            fout << " ";
        }
    }

    fout << "\n";

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
