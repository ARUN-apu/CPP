//Write a C++ program to find sum of all natural numbers between 1 to n.
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    int sum = 0;
    int i = 1;
    while(i<= n){
        sum = sum+i;
        i++;
    }
    cout<<"Sum of all natural numbers between 1 to "<< n <<" is : "<<sum<<endl;
    return 0;
}