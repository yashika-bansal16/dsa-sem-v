//swap matrix elemnts - you are a matrix of n*m swap each element with elements in its immediate bottom right cell if its exit print the modified matrix.first line contains two integers n and m the size of the matrix next n lines contains m space separated integers each representing the elements of the matrix
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    vector<vector<int>> mat(n,vector<int>(m));
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++) {
            cin>>mat[i][j];
        }
    }

    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<m-1;j++) {
            swap(mat[i][j], mat[i+1][j+1]);
        }  
    }
    
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++) {
            cout<<mat[i][j]<<' ';
        }
        cout<<endl;
    }
}