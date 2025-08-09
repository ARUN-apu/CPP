//149.	Write a C program to print all strong numbers between given interval using functions.
#include<iostream>
using namespace std;
int factorial(int n){
    if (n == 0 || n == 1) { // Base case: factorial of 0 or 1 is 1
        return 1;
    } else {
        return n * factorial(n - 1); // Recursive step
    }
}

void strong_number(int n){
    int sum = 0;
    factorial(n);
    if
}

void factorial_between_giveninterval(int a, int b){
    cout<<"prime numbers between "<<a<<" and "<<b<<" are : "<<endl;
    for(int i = a; i<= b; i++){
        factorial(i);
    }
}

int main() {
    int a,b;
    cout<<"Enter the Range: "<<endl;
    cin>>a>>b;
    cout<<"The range is between "<<a<<" and "<<b<<endl;

    factorial(a,b);
    return 0;
}

