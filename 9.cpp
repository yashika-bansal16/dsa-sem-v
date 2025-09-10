#include <iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int length=s.length();
    bool a=(s.find('#') != -1 ) && (s.find('&') !=-1);
    if(a && length%2==0){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}