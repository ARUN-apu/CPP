#include<iostream>
using namespace std;

int main(){
    double fahrenheit;
    cout<<"Enter temperature in fahrenhite : ";
    cin>>fahrenheit;

    double celcius;
    celcius = (fahrenheit - 32) * (5.0/9.0);
    cout<<"Temperature : "<<fahrenheit<<"F is equal to "<<celcius<<"c"<<endl;
    return 0;
}