#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int fsum=arr[0]+arr[1];
    int lsum=arr[n-1]+arr[n-2];
    cout<<fsum<<" "<<lsum<<endl;
    return 0;
}