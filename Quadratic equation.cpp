/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;

int main () {
   double a,b,c,D,x,x1,x2;
   cout<<"ax^2+bx+c=0"<<endl;
   cout<<"შეიყვანეთ ცვლადები"<<endl;
   cout<<"a: ";
   cin>>a;
   cout<<"b: ";
   cin>>b;
   cout<<"c: ";
   cin>>c;
   D=pow(b,2)-4*a*c;
   cout<<"დისკრიმინანტი D= "<<D<<endl;
   if(D>0){
      x1=(-b+sqrt(D))/2*a;
      x2=(-b-sqrt(D))/2*a;
      cout<<"x1= "<<x1<<" "<<"x2= "<<x2;
  } else if (D==0) {
      x=-b/2*a;
      cout<<x<<endl;
  } else if(D<0) {
    cout<<"განტოლებას ამონახსნი არ აქვს";
  }
   
    
    return 0;
}