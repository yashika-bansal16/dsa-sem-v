#include <iostream>
#include <vector>

using namespace std;

void nextGreaterElements(const vector<int>& arr) {
    int n = arr.size();
    cout << "Next Greater Elements:" << endl;

    for (int i = 0; i < n; ++i) {
        int next = 0;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] > arr[i]) {
                next = arr[j];
                break;
            }
        }
        cout << next << endl;
    }
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    nextGreaterElements(arr);

    return 0;
}
