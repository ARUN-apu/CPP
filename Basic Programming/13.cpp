#include<iostream>
using namespace std;
int main(){
    double Total_angle = 180;
    double angle1;
    cout<<"Enter angle1: ";
    cin>>angle1;

    double angle2;
    cout<<"Enter angle2: ";
    cin>>angle2;

    double angle3;
    angle3 = Total_angle - (angle1 + angle2);

    cout<<"Third angle of the Triangle is : "<<angle3<<endl;

    return 0;
}