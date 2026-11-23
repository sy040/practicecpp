// swap using 3rd var
#include <iostream>
using namespace std;
int main(){
    int a,b,t;
    cout<< "Enter Value for a,b: ";
    cin>>a>>b;
    cout<<"Before swap a: "<<a <<" b: "<<b<<endl;
    t=a;
    a=b;
    b=t;
    cout<<"After swap a: "<<a<<" b: "<<b;
    return 0;
}
