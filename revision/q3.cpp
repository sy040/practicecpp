// prime or not
#include <iostream>
using namespace std;

int p_n(int n){
    int i;
    if(n<=1)
        return false;
    for(i=2;i*i<=n;i++){
        if(n%i==0)
            return false;
    }
    return true;
}
int main(){
    int n;
    cout<<"Enter value to be checked: ";
    cin>>n;
    if(p_n(n))
        cout<<"Prime";
    else
        cout<<"Not Prime";
    return 0;
}

