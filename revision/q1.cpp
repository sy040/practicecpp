// Largest of Three Numbers
#include <iostream>
using namespace std;
int main(){
    int x,y,z;
    int grt=0;
    cout<< "Enter Valuse for x,y,z: ";
    cin>>x>>y>>z;
    if(x>=y && x>=z){
        grt=x;
    }
    else if(y>=x && y>=z){
        grt=y;
    }
    else{
        grt=z;
    }
    cout<<"Largest Number is: "<<grt;
    return 0;
}