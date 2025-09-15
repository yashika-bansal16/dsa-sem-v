//maximum profit
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of days: ";
    cin >> n;

    vector<int> prices(n);
    cout << "Enter the prices for each day:\n";
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }

    int maxProfit = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int profit = prices[j] - prices[i];
            if (profit > maxProfit) {
                maxProfit = profit;
            }
        }
    }

    cout << "Maximum Profit: " << maxProfit << endl;

    return 0;
}
