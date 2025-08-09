//Write a C++ program to print all alphabets from a to z. – using while loop
#include<iostream>
using namespace std;

int main(){
    cout<<"All the alphabets from a to z are : "<<endl;
    char ch = 'a';
    while(ch <= 'z'){
        cout<<ch<<endl;
        ch++;
    }
    return 0;
}