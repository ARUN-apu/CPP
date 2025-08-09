#include<iostream>
using namespace std;

int main(){
    double length;
    cout<<"Enter the length in cm: ";
    cin>>length;

    double meter, kilometer;

    meter = length/100;
    kilometer = length/100000;

    cout<<"length "<<length<<" cm in meter is : "<<meter<<endl;
    cout<<"length "<<length<<" cm in kilometer is : "<<kilometer<<endl;

    return 0;
}