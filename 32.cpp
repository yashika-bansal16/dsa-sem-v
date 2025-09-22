//rotate -string k timrs to right
#include <iostream>
#include <bits/stdc++.h>  
using namespace std;
int main() {
    int N,k;
    cin >> N>>k;
    string s;
    cin>>s;
    k=k%N;
    
    string rotated = s.substr(N-k) + s.substr(0, N-k);
    cout << rotated << endl;
    return 0;
}