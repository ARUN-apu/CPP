/*
#include<iostream>
using namespace std;
int main(){
    double Total_mark = 500;
    double mark_of_sub1, mark_of_sub2, mark_of_sub3, mark_of_sub4, mark_of_sub5;
    cout<<"Enter the mark of subject 1 : ";
    cin>>mark_of_sub1;

    cout<<"Enter the mark of subject 2 : ";
    cin>>mark_of_sub2;

    cout<<"Enter the mark of subject 3 : ";
    cin>>mark_of_sub3;

    cout<<"Enter the mark of subject 4 : ";
    cin>>mark_of_sub4;

    cout<<"Enter the mark of subject 5 : ";
    cin>>mark_of_sub5;

    double total, avg, percentage;
     total = mark_of_sub1 + mark_of_sub2 + mark_of_sub3 + mark_of_sub4 + mark_of_sub5 ;
     avg = (mark_of_sub1 + mark_of_sub2 + mark_of_sub3 + mark_of_sub4 + mark_of_sub5) / 5;
    percentage = ( total / Total_mark) * 100;

    cout<<"==============================================="<<endl;

    cout<<"The Total mark is: "<<Total_mark<<endl;
    cout<<"Total obtained mark is: "<<total<<endl;
    cout<<"Average is : "<<avg<<endl;
    cout<<"Percentage is: "<<percentage<<endl;
    return 0;
}
    */

// Using Arrays

#include<iostream>
using namespace std;
int main(){
    int const number_of_sub = 5;
    double marks[number_of_sub];
    double total = 0, avg, percentage;
    double total_marks = 500;

    for(int  i = 0; i<number_of_sub; i++){
        cout<<"Enter the marks of Subject  "<<i+1<<": ";
        cin>>marks[i];
        total = total + marks[i];
    }

avg = total / number_of_sub;
percentage = (total / total_marks) * 100;

cout << "===================================" << endl;
cout<<"Total obtained mark is : "<<total<<endl;
cout<<"Average is : "<<avg<<endl;
cout<<"Percentage is : "<<percentage<<"%"<<endl;
    return 0;
}