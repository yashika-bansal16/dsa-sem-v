
#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;

int main() {
    int k, n;
    cin >> n >> k;
    string s;
    cin >> s;

  
    s = s.substr(k, s.length() - 2 * k);
    cout << s << endl;

    return 0;
}

