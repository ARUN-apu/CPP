//Write a C++ program to count number of digits in a number.
#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;

    int count = 0;
    if(num == 0){
        count = 1;
    }
    while(num != 0){
        num = num / 10;
        count = count + 1;
    }
     cout<<"The value of count is : "<<count;

    return 0;
}