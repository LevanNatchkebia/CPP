#include <iostream>
#include <cmath>
using namespace std;

int main () {
   int year;
   cout<<"Check a leap year"<<endl;
   cout<<"Enter a year: ";
   cin>>year;
   if ((year%4==0 && year%100!=0) || year%400==0) {
       cout<<"It is a leap year";
   }else {
       cout<<"It is not leap year";
   }
    
    return 0;
}

