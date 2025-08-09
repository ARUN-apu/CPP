//Write a C program to check whether a character is alphabet or not.
#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter a character : ";
    cin>>ch;

    if((ch>='A' && ch<= 'Z') ||(ch>='a' && ch<= 'z') ){
        cout<<ch<<" is a alphabet."<<endl;
    }else{
        cout<<ch<<" is not a alphabet."<<endl;
    }

    return 0;
}
