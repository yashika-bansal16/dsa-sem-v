#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int count1 = count(arr.begin(), arr.end(), 1);
    
    if(count1 < n) {
        arr.erase(arr.begin() + count1);
        for(int i=0; i<arr.size(); i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
