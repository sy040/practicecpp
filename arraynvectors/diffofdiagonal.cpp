// Matrix diagonal difference
#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"Enter size: ";
    cin>>n;
    int arr[n][n];
    cout<<"Enter array values: ";
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            cin>>arr[i][j];
        }
    }
    int pdiag=0; //primary diagonal 
    int sdiag=0; //secondary diagonal
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i==j){
                pdiag+=arr[i][j];
            }
            if(i==n-j+1){
                sdiag+=arr[i][j];
            }
        }
    }
    int diff=0;
    diff=sdiag-pdiag;
    cout<<"The difference between diaglonals is: "<<diff;
}
