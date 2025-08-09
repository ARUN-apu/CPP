//Write a C++ program to input any alphabet and check whether it is vowel or consonant.
#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter a alphabet : ";
    cin>>ch;

    if(ch == 'A' || ch == 'a' || ch == 'E' || ch == 'e' || ch == 'I' ||  ch == 'i' || ch == 'O' || ch == 'o' || ch == 'U' || ch == 'u'){
        cout<<ch<<" is a vowel."<<endl;
    }else if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        cout << ch << " is a consonant." << endl;
    }
    else {
        cout << ch << " is not an alphabet." << endl;
    }
    return 0;
}