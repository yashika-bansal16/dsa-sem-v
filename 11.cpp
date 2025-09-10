//count even odd
#include<iostream>
using namespace std;

int main() {
    int n;
    int cntodd = 0;
    int cnteven = 0;

    cin >> n;
    int arr[n];.
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            cnteven++;
        } else {
            cntodd++;
        }
    }

    if (cnteven > cntodd) {
        cout << "More even numbers" << endl;
    } else if (cnteven < cntodd) {
        cout << "More odd numbers" << endl;
    } else {
        cout << "Equal even and odd numbers" << endl;
    }

    return 0;
}
