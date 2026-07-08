#include<iostream>
using namespace std;
int main(){
    int n1,rem,n2,n,i;
    cout<<"Enter number: ";
    cin>>n;
    n1=n;
    rem=0;
    n2=0;
    while(n1!=0){
        rem=n1%10;
        n2=(n2*10)+rem;
        n1=n1/10;
    }
    if(n2==n){
        cout<<"Palindrome";
    }
    else{
        cout<<"Not a palindrome";
    }
    return 0;
}