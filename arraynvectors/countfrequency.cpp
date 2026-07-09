//Count frequency of numbers
// Delete the smallest element
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,i;
    cout<<"Enter range: ";
    cin>>n;
    int arr[n];
    int freq[101]={0};
    cout<<"Enter values: ";
    for(i=0;i<n;i++){
        cin>>arr[i];
        freq[arr[i]]++;
    }
    for(i=0;i<n;i++){
        if(freq[i]==0){
            continue;
        }
        else{
            cout<<i<<" -> "<<freq[i]<<endl;
        }
    }
    return 0;
}