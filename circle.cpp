#include <iostream>
#include <cmath>
using namespace std;

int main () {
    float R,S;
    const float P=3.14;
    cout<<"გამოითვალეთ წრეწირის ფართობი"<<endl;
    cout<<"შეიყვანეთ რადიუსი: ";
    cin>>R;
    S=P*(R*R);
    
    if (R>0) {
        cout<<"წრეწირის ფართობია: "<<S;
    }else {
        cout<<"შეიყვანეთ დადებითი რიცხვი";
    }
    
    return 0;
}

