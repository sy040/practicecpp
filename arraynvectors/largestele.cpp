// Find largest element in array
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
    int l=0;
    for(i=0;i<n;i++){
        if(l<=arr[i]){
            l=arr[i];
        }
    }
    cout<<"The largest element in array is: "<<l;
    return 0;
}