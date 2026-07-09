//90 degree rotation
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int r,c,i,j;
    cout<<"Enter size of array row and column: ";
    cin>>r>>c;
    int arr[r][c];
    cout<<"Enter array values: ";
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    //transpose 
    for(i=0;i<r;i++){
        for(j=i+1;j<c;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
    //rotate 90
    for(i=0;i<r;i++){
        int lft=0,rt=c-1;
        while(lft<rt){
            swap(arr[i][lft],arr[i][rt]);
            lft++;
            rt--;
        }
    }
    //new array
    cout<<"After 90 degree rotation: "<<endl;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}