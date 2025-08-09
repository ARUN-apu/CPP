#include<iostream>
using namespace std;

int main(){
    int days;
    cout<<"Enter Days: ";
    cin>>days;
    int remaining_days, year, week, day;
    year = days/365;
    remaining_days = days % 365;

    week = remaining_days / 7;
    remaining_days = remaining_days % 7;



    cout<<days<<" days is equal to : "<<year<<" years "<<week<<" weeks and "<<remaining_days<<" days"<<endl;

    return 0;
}