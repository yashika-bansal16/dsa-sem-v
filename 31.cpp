//string rotate-1-left
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int N,k;
    cin >> N>>k;
    string s;
    cin>>s;
    k=k%N;
    
    string rotated = s.substr(k) + s.substr(0, k);
    cout << rotated << endl;
    return 0;
}
