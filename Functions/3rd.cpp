//Write a C++ program to find maximum and minimum between two numbers using functions.
#include<iostream>
using namespace std;
void compare(int a, int b){
    if(a>b){
        cout<<a<<" is maximum and "<<b<<" is minimum between "<<a<<" and "<<b<<endl;
    }else{
        cout<<b<<" is maximum and "<<a<<" is minimum between "<<a<<" and "<<b<<endl;
    }
}

int main(){
    int a, b;
    cout<<"Enter value of a and b: ";
    cin>>a>>b;
    compare(a,b);
    return 0;
}