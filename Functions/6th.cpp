//148.	Write a C++ program to find all prime numbers between given interval using functions.
#include<iostream>
using namespace std;
void prime_numbers(int n){
if(n<=1){
    //cout<<n<<" is not a prime number."<<endl;
    return;
}
for(int i = 2; i<n; i++){
    if(n % i == 0){
    //cout<<n<<" is not a prime number."<<endl;
    return;
    }
}
cout<<n<<endl;//<<" is a prime number."<<endl;
}

void prime_numbers_between_giveninterval(int a, int b){
    cout<<"prime numbers between "<<a<<" and "<<b<<" are : "<<endl;
    for(int i = a; i<= b; i++){
        prime_numbers(i);
    }
}
int main(){
    int a,b,n;
    cout<<"Enter the Range: "<<endl;
    cin>>a>>b;
    cout<<"The range is between "<<a<<" and "<<b<<endl;

    prime_numbers_between_giveninterval(a,b);
    return 0;
}