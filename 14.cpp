#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    vector<int> marks(n);
    cout << "Enter marks of students: ";
    for (int i = 0; i < n; i++) {
        cin >> marks[i];
    }

    
    int sum = 0;
    for (int i = 0; i < min(5, n); i++) {
        sum += marks[i];
    }
    cout << "Sum of first 5 students: " << sum << endl;

    
    vector<int> last5;
    for (int i = max(0, n - 5); i < n; i++) {
        last5.push_back(marks[i]);
    }
