#include<iostream>
#include <algorithm>
using namespace std;

int main(){
    int r,c;
    cout<<"Enter size of array row and column: ";
    cin>>r>>c;
    int arr[r][c];
    cout<<"Enter array values: ";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }

    
    for(int i=0;i<r;i++){
        int lft=0, rt=c-1;
        while(lft<rt){
            swap(arr[i][lft],arr[i][rt]);
            lft++;
            rt--;
    }
    }

    cout<<"After swap: ";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}