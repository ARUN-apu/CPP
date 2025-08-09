// 17.	Write a C program to enter P, T, R and calculate Compound Interest.
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double P,T,R;
    cout<<"Enter the Principle amount: ";
    cin>>P;

    cout<<"Enter the total Time period: ";
    cin>>T;

    cout<<"Enter the Rate of interest: ";
    cin>>R;

    double CI;
    double A;
    A = P * pow((1+(R/100)),T);
    CI =  A - P;
    cout<<"Compound Interest is : "<<CI<<"Rs"<<endl;
    cout<<"After interest Actual money is : "<<A<<"Rs"<<endl;
    return 0;
}