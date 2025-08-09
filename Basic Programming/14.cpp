#include<iostream>
using namespace std;
int main(){
    double base,height,Area;
    cout<<"Enter the base: ";
    cin>>base;

    cout<<"Enter the height: ";
    cin>>height;

    Area = 0.5 * base * height;

    cout<<"The area of the triangle is: "<<Area<<endl;
    return 0;
}