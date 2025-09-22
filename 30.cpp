//characters from paired strings make string by concatenating first character of first string and last character of last string and make a another string by concatenating  first two character of second string and last two character of second last string


#include <iostream>
#include <vector>
#include <string>
using namespace std;
#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<string> arr(N);
    for (int i = 0; i < N; i++) cin >> arr[i];

    vector<string> result;
    for (int i = 0; i < N / 2; i++) {
        string left = arr[i].substr(0, i + 1);  
       string right = arr[N - 1 - i].substr(arr[N - 1 - i].size() - (i + 1));  
        result.push_back(left + right);
    }

    for (int i = 0; i < result.size(); i++) {
        cout << result[i];
        if (i != result.size() - 1) cout << " ";
    }
    return 0;
}

