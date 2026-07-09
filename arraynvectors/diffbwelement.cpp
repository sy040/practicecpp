// Difference between first and last element in an array
#include<iostream>
using namespace std;
int main(){
    int n,i,diff;
    cout<<"Enter range: ";
    cin>>n;
    int arr[n];
    cout<<"Enter values: ";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    int l;
    l=sizeof(arr)/sizeof(arr[0]);
    diff=arr[0]-arr[l-1];
    cout<<"The difference between 1st and last element in array is :",
}
