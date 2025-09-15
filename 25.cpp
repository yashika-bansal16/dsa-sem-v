#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
    int n, m, k;
    cin >> n >> m >> k;

    vector<vector<int>> matrix(n, vector<int>(m));   
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < n / 2; i++) {
        for (int j = 0; j < k; j++) {
            swap(matrix[i][m - k + j], matrix[n - 1 - i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}