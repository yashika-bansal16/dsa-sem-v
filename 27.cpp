
  //you are given two strings s1 and s2 and a number N insert s2 in s1 after every n characters print the modified string 
#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;


int main(){
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);

    int n;
    cin >> n;

    string result;
    int count = 0;
    for (int i = 0; i < s1.size(); i++) {
        result += s1[i];
        count++;
        if (count == n && i != s1.size() - 1) {
            result += s2;
            count = 0;
        }
    }
    cout << result << endl;
}