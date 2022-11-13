#include <iostream>
using namespace std;
#include <cmath>


int main()
{
    char op;
    float a,b,s,m,g,d;
    
    cout<<"Operators: +,-,*,/"<<endl;
    cout<<"Enter operator: ";
    cin>>op;
    cout<<"Number 1: ";
    cin>>a;
    cout<<"Number 2: ";
    cin>>b;
    s=a+b;
    m=a-b;
    g=a*b;
    d=a/b;
    
    
    switch (op) {
        case '+':
        cout<<a<<"+"<<b<<"="<<s;
        break;
        
        case '-':
        cout<<a<<"-"<<b<<"="<<m;
        break;
        
        case '*':
        cout<<a<<"*"<<b<<"="<<g;
        break;
        
        case '/':
        cout<<a<<"/"<<b<<"="<<d;
        break;
        
        default:
        cout<<"Please use correct operator";
        break;
    }

    return 0;
}
