#include <iostream>
#include <cmath>
using namespace std;

int main () {
    float a, b, c;
    cout<<"შეიყვანეთ 3 რიცხვი: ";
    cin>>a>>b>>c;
    
    if (a>b && a>c) {
        cout<<"მაქსიმალური რიცხვი არის: "<<a;
    } 
    
     if (b>a && b>c) {
        cout<<"მაქსიმალური რიცხვი არის: "<<b;
    } 
    
    if (c>a && c>b){
        cout<<"მაქსიმალური რიცხვი არის: "<<c;
    } 
    
    
    
    
    
    
    return 0;
}

