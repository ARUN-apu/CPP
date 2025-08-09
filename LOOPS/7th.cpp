//Write a C++ program to find sum of all even numbers between 1 to n.
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>> n;

    int sum = 0;
    cout<<"Even numbers are : ";
    for(int i = 1; i<= n; i++){
        if(i % 2 == 0){
        sum = sum +i;
       cout<<i<<endl;
        }
    }

    cout<<"Sum of all Even numbers between 1 and  "<<n<<" is: "<<sum<<endl;
    return 0;
}