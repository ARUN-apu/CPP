// #include<iostream>
// using namespace std;
// int main(){
//     int num1;
//     int num2;
//     cout<<"Enter number1: ";
//     cin>>num1;
//     cout<<"Enter number2: ";
//     cin>>num2;

//     int power = 1;
//    if(num2 == 0){
//     power = 1;
//    }
//    else
//    {
//     for(int i = 1; i<=num2; i++){
//         power = power * num1;
//     }
//    }


//     cout<<"Power of num1 is: "<<power<<endl;

//     return 0;
// }

#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int a;
    cout<<"Enter number a : ";
    cin>>a;
    int b;
    cout<<"Enter number b : ";
    cin>> b;

    int power;
    power = pow(a, b);

    cout<<a<<" raised to the power "<<b<<" is "<<power<<endl;
    
    return 0;
}