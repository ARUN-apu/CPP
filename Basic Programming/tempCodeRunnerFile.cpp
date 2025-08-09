// 17.	Write a C program to enter P, T, R and calculate Simple Interest.
#include<iostream>
using namespace std;
int main(){
    double P,T,R;
    cout<<"Enter the Principle amount: ";
    cin>>P;

    cout<<"Enter the total Time period: ";
    cin>>T;

    cout<<"Enter the Rate of interest: ";
    cin>>R;

    double SI;
    SI = (P*T*R ) / 100;
    cout<<"Simple Interest is : "<<SI<<"Rs"<<endl;
    return 0;
}
