// Longest consecutive increasing subarray
#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"Enter size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter values: ";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }

    int l=1,ml=1,si=0,msi;
    for(i=1;i<n-1;i++){
        
        if(arr[i-1]<arr[i]){
            l=l+1;
        }
        else{
            l=1;
            si=i;
        }
        if(ml<l){
            ml=l;
            msi=si;
        }
    }
    cout<<"Longest consecutive increasing subarray: "<<endl;
    for(i=msi;i<msi+ml;i++){
        cout<<arr[i]<<" ";
    }
}