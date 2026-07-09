//90 degree
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int r,c,i,j;
    int lft,rt;
    cout<<"Enter size of array row and column: ";
    cin>>r>>c;
    int arr[r][c];
    cout<<"Enter array values: ";
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    //reverse
    for(i=0;i<r;i++){
        lft=0;
        rt=c-1;
        while(lft<rt){
            swap(arr[i][lft],arr[i][rt]);
            lft++;
            rt;
        }
    }

    //rotate 90
    for(j=0;j<c;j++){
        int top=0,bott=r-1;
        while(top<bott){
            swap(arr[top][j],arr[bott][j]);
            top++;
            bott--;
        }
    }
    //new array
    cout<<"After 180 degree rotation: "<<endl;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}