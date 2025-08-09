#include<iostream>
using namespace std;

int main(){
    double length;
    cout<<"Enter the length: ";
    cin>>length;

    double breadth;
    cout<<"Enter the breadth: ";
    cin>> breadth;

    double perimeter;
    perimeter = 2 *(length + breadth);

    cout<<"The perimeter of the rectangle is: "<<perimeter<<endl;
    return 0;
}