//rotate and check palindrome
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n1, n2, k;
    cin >> n1 >> n2 >> k;
    string s1, s2;
    cin >> s1 >> s2;
    k %= n1;
    string r1 = s1.substr(n1 - k) + s1.substr(0, n1 - k);
    k %= n2;
    string r2 = s2.substr(k) + s2.substr(0, k);
    string s3 = r1 + r2;
    string rev = s3;
    reverse(rev.begin(), rev.end());
    cout << s3 << " " << (s3 == rev ? "True" : "False");
    return 0;
}

