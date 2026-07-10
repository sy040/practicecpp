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
    int currs,maxs=arr[0];
    for(i=0;i<n;i++){
        currs=0;
        for(j=i;j<n;j++){
            currs+=arr[j];
            if(currs>maxs){
                maxs=currs;
            }    
        }
    }
    cout<<"The maximum sum is: "<<maxs;
}