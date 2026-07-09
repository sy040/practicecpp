// Delete the smallest element
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,i,diff;
    cout<<"Enter range: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter values: ";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }

    int s=arr[0],si=0;
    for(i=0;i<n;i++){
        if(s>arr[i]){
            s=arr[i];
            si=i;
        }
    }

    arr.erase(arr.begin()+si);
    cout << "Array after deleting the smallest element: "<<endl;
    for (i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}