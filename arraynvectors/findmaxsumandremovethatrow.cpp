// Find max sum of row in a matrix and discard it while printing
#include<iostream>
using namespace std;
int main(){
    int n,m,i,j;
    cout<<"Enter size of array row: ";
    cin>>n;
    cout<<"Enter size of array column: ";
    cin>>m;
    int arr[n][m];
    cout<<"Enter values: "<<endl;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int s,ms=0,mi;
    for(i=0;i<n;i++){
        s=0;
        for(j=0;j<m;j++){
            s+=arr[i][j];
        }
        if(ms<=s){
            ms=s;
            mi=i;
        }
    }
    cout<<"New array is: "<<endl;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(i!=mi){
                cout<<arr[i][j]<<" ";
            }
            else{
                continue;
            }
        }
        cout<<endl;
    }
}