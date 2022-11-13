/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

#include <iostream>
#include <cmath>
using namespace std;

int main () {
   int x1,y1,x2,y2,AB;
   cout<<"იპოვეთ 2 წერტილს შორის მანძილი"<<endl;
   cout<<"შეიყვანეთ კოორდინატები"<<endl;
   cout<<"x1: ";
   cin>>x1;
   cout<<"y1: ";
   cin>>y1;
   cout<<"x2: ";
   cin>>x2;
   cout<<"y2: ";
   cin>>y2;
   AB=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
   cout<<"2 წერტილს შორის მანძილი = "<<AB;
   
   
    
    return 0;
}
