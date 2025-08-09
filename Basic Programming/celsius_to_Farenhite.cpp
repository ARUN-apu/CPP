#include<iostream>
using namespace std;

int main(){
    double temp_cel ;
    cout<<"Enter the temperature in celsius : ";
    cin>>temp_cel;

    double temp_fahrenhite;
    temp_fahrenhite = (temp_cel * 1.8) + 32;

    cout<<"The temperature: "<<temp_cel<<"c "<< " is equal to : "<<temp_fahrenhite<<"F"<<endl;
    return 0;
}