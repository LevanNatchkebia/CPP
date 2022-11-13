#include <iostream>
#include <cmath>
using namespace std;

int main () {
    float C,F,a;
    cout<<"°C to °F, °F to °C conventer"<<endl;
    cout<<"write down 0, if you want °C to °F or 1 if you want °F to °C: ";
    cin>>a;
    
    if (a==0) {
        cout<<"°C: ";
        cin>>C;
        F=(C*9/5)+32;
    cout<<"°F="<<F<<endl;
    }else if (a==1) {
        cout<<"°F: ";
         cin>>F;
         C=(F-32)*5/9;
    cout<<"°C= "<<C<<endl;
    }
    
    
    return 0;
}

