//Write a C++ program to find maximum between two numbers.
#include<iostream>
using namespace std;

int main(){
    int m,n;
    cout<<"Enter m and n : ";
    cin>>m>>n;
    if(m>n){
        cout<<m<<" is the maximum between the two numbers. "<<endl;
    }else
    cout<<n<<" is the maximum between the two numbers. "<<endl;

    return 0;
}
