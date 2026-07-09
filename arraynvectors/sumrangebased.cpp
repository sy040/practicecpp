#include<iostream>
using namespace std;
int main(){
    int n,L,R,i;
    cout<<"Enter range of array: ";
    cin>>n;
    cout<<"Enter array sum start and end index: ";
    cin>>L;
    cin>>R;
    int arr[n];
    cout<<"Enter array value: ";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    int s=0;
    for(i=L-1;i<R;i++){
        s+=arr[i];
    }
    cout<<"The sum is: "<<s;
}