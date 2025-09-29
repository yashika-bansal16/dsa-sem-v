//Given a string consisting of digits, alphabets and special characters. Transform this string into another by converting all alphabets into small case letters, leaving digits as it is and moving special character to the end. Print the transformed string.


#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; 
    cin >> n;
    string s;
    cin >> s;
    string result = "", specials = "";
    for (char c : s) {
        if (isalpha(c)) result += tolower(c);
        else if (isdigit(c)) result += c;
        else specials += c;
    }
    cout << result + specials;
}
