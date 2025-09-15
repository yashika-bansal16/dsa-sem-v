#include <iostream>
#include <vector>

using namespace std;

void allPairsWithSum(vector<int>& arr, int k) {
    int n = arr.size();
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (arr[i] + arr[j] == k) {
                cout << "(" << arr[i] << ", " << arr[j] << ")\n";
            }
        }
    }
}

int main() {
    int n, k;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << "Enter the target sum k: ";
    cin >> k;

    cout << "Pairs with sum " << k << " are:\n";
    allPairsWithSum(arr, k);

    return 0;
}
