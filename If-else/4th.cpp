//Write a C++ program to check whether a number is divisible by 5 and 11 or not.
#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    if(num % 5 == 0 && num % 11 == 0){
        cout<<num<<" is divisible by 5 and 11."<<endl;
    }else{
        cout<<num<<" is not divisible by 5 and 11."<<endl;
    }
    return 0;
}