//Equilateral triangle area 
#include<iostream>
#include<cmath>
using namespace std;

int main(){
    double side_length,Area;
    cout<<"Enter the angle: ";
    cin>>side_length;

    Area = (sqrt(3) / 4) * pow(side_length,2);
    cout<<"The area of the Equilateral triangle is: "<<Area<<endl;
    return 0;
}