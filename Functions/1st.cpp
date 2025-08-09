//Write a C++ program to find cube of any number using function.
#include<iostream>
using namespace std;
int cube(int a){
    return a*a*a;
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    // int result;
    // result = cube(n);
    cout<<"The cube of "<<n<<" is "<<cube(n)<<endl;
    return 0;
}
