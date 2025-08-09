//Write a C++ program to print all natural numbers in reverse (from n to 1). – using while loop
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    cout<<"All natural numbers in reverse order: "<<endl;
    int i = n;
    while(i >= 1){
        cout<<i<<endl;
        i--;
    }
    return 0;
}