#include <iostream>
using namespace std;
int main(){
    int n,x;
    cin>>n>>x;
    int cost=n*x;
    if(cost>9999 && cost<99999){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
    return 0;
}