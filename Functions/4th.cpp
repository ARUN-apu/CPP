//Write a C++ program to check whether a number is even or odd using functions.
#include<iostream>
using namespace std;
void check(int a){
    if( a % 2 == 0){
        cout<<a<<" is a Even number."<<endl;
    }else{
        cout<<a<<" is a Odd number."<<endl;
    }
    return;
}

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    check(n);
    return 0;
}