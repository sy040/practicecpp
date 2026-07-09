#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"Enter range of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array value: ";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Leader in array are: "<<endl;
    cout<<arr[n-1]<<" ";
    for(i=n-1;i>=0;i--){
        if(arr[i-1]>arr[i]){
            cout<<arr[i-1]<<" ";
        }
    }
}