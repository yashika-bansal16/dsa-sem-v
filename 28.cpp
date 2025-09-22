//ascii range character counter given a string of lenght k and two integers n and m count the number of characters whose ascii values lies within the range defined by n m   first line has 3 spaced integer k n and m


#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    getline(cin, s);

    int n, m;
    cin >> n >> m;

    int count = 0;
    for (int i = 0; i < s.size(); i++) {
        if ((int)s[i] >= n && (int)s[i] <= m) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}