//What  is the output of the below code.
#include<iostream>
using namespace std;

void decrease(int &a, int &b){
    --a;
    b = b - 2;
    cout<<a<< ":"<<b<<endl;
}

int main(){
    int p = 26;
    int q = 13;
    decrease(p,q);
    cout<<p<<":"<<q<<endl;
    return 0;
}