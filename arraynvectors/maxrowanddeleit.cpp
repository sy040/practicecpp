// Find max row in a matrix and discard it.
#include<iostream>
using namespace std;
int main(){
    int n,m,i,j;
    cout<<"Enter range for row and column: ";
    cin>>n>>m;
    int arr[n][m];
    cout<<"Enter values: ";
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int mx=arr[0][0],mi=0;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(mx<arr[i][j]);
            mi=i;
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==mi){
                continue;
            }
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
}
