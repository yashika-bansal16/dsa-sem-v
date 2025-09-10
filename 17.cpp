#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int minIndex = min_element(arr.begin(), arr.end()) - arr.begin();
    int maxIndex = max_element(arr.begin(), arr.end()) - arr.begin();
    
    if(minIndex > maxIndex) {
        swap(minIndex, maxIndex);
    }
    
    vector<int> newArr;

    newArr.insert(newArr.end(), arr.begin() + minIndex, arr.begin() + maxIndex + 1);

    newArr.insert(newArr.end(), arr.begin(), arr.begin() + minIndex);
    
    
    newArr.insert(newArr.end(), arr.begin() + maxIndex + 1, arr.end());
    
    for(int i=0; i<newArr.size(); i++){
        cout << newArr[i] << " ";
    }
    cout << endl;
    return 0;
}