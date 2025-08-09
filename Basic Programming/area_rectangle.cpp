#include<iostream>
using namespace std;

int main(){
    double length;
    cout<<"Enter the length: ";
    cin>>length;

    double breadth;
    cout<<"Enter the breadth: ";
    cin>> breadth;

    double area;
    area = length * breadth;

    cout<<"The area of the rectangle is: "<<area<<endl;
    return 0;
}