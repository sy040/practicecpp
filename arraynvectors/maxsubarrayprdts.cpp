// Maximum Product Subarray
#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"Enter range: ";
    cin>>n;
    int arr[n];
    cout<<"Enter values: ";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    int currm,maxm=arr[0];
    for(i=0;i<n;i++){
        currm=1;
        for(j=i;j<n;j++){
            currm*=arr[j];
            if(currm>maxm){
                maxm=currm;
            }
        }
    }
    cout<<"The max product is: "<<maxm;
}