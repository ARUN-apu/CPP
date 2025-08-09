//Write a C++ program to find diameter, circumference and area of circle using functions.
#include<iostream>
using namespace std;
// I can use const pi = 3.14159 here also.
double diameter_of_circle(double r){
    return 2*r;
}

double cercumference_of_circle(double r){
    double pi = 3.14159;
    return 2*pi*r;
}

double area_of_circle(double r){
    double pi = 3.14159;
    return pi*r*r;
}

int main(){
    double r;
    cout<<"Enter the radius value : "<<endl;
    cin>>r;

    cout<<"The diameter of a circle is "<<diameter_of_circle(r)<<endl;
    cout<<"The cercumference of a circle is "<<cercumference_of_circle(r)<<endl;
    cout<<"The area of a circle is "<<area_of_circle(r)<<endl;
    return 0;
}