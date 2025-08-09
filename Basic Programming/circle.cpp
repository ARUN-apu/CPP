#include<iostream>
using namespace std;

int main(){
    double radius;
    cout<<"Enter radius of the circle: ";
    cin>>radius;

    double const pi = 3.14159;
    double diameter,circumference,area;

    diameter = 2*radius;
    circumference = 2*pi*radius;
    area = pi * (radius * radius);

    cout<<"Circle diameter is: "<<diameter<<endl;
    cout<<"Circle circumference is: "<<circumference<<endl;
    cout<<"Circle area is: "<<area<<endl;


    return 0;
}