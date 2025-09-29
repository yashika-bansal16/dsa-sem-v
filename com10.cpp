//nani house
//a kid having n toys he wants to carry some toys he can lift upto 5kg in weight find out maximum no of toys he can go with  you will be given an array of integers whose ith element is the weight of the ith toy input  -two lines contain n integer and next line contain array of integers output -print the maximum no of toys he can carry
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; 
    cin >> n;
    vector<int> weights(n);
    for (int i = 0; i < n; i++) {
        cin >> weights[i];
    }
    sort(weights.begin(), weights.end());
    int count = 0, totalWeight = 0;
    for (int weight : weights) {
        if (totalWeight + weight <= 5000) {
            totalWeight += weight;
            count++;
        } else {
            break;
        }
    }
    cout << count << endl;
}
