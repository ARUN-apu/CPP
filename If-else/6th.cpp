//Write a C++ program to check whether a year is leap year or not.
#include<iostream>
using namespace std;

int main(){
    int year;
    cout<<"Enter a year : "<<endl;
    cin>>year;

    if(year % 4 == 0 ){
        if(year % 100 == 0){
        if(year % 400 == 0){
            cout<<year<<" is a Leap year."<<endl;
        }else{
            cout<<year<<" is  not a Leap year."<<endl;
        }
    }else{
        cout<<year<<" is a Leap year."<<endl;
    }
}else{
        cout<<year<<" is not a Leap year."<<endl;
    
}
    
    return 0;
}