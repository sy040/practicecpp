// Negative of even rows and swap those rows in a matrix
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n,i,j;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n][n];
    cout<<"Enter values: ";
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            cin>>arr[i][j];
        }
    }
    int top=1,botm=n;
    while(top<botm){
        for(j=1;j<=n;j++){
            swap(arr[top][j],arr[botm][j]);
        }
        top++;
        botm--;
    }

    cout<<"Array after negation and swap is: "<<endl;
        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
                if(i%2==0){
                    arr[i][j]=-1*arr[i][j];
                }
                cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}