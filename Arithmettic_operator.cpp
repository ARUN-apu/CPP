// Rupees to dollar converter
/*
#include<iostream>
using namespace std;

int main(){
    double usd_per_rupees{0.012};

    cout<<"----Welcome to Rupees to dollar converter-----"<<endl;
    cout<<"Enter the Rupees: "<<endl;
    double rupees{0.0};
    cin>> rupees;

    double dollars{0.0};
     dollars = rupees * usd_per_rupees;

     cout<<rupees<<"rs in dollar is: "<<dollars<<"dollars"<<endl;
     
    return 0;
}



// celcius to farenhite
#include<iostream>
using namespace std;

int main(){


    cout<<"----Welcome to Farenhite to Celcius converter----"<<endl;

    double celcius;
    double farenhite;

    cout<<"Enter the celcius value: "<<endl;
    cin>>celcius;
    cout<<"You Entered "<<celcius<<" celcius"<<endl;
     farenhite = (celcius * 1.8) + 32;

     cout<<celcius<<"  celcius is equivalent to "<<farenhite<< "F"<<endl;

    return 0;
}
    */

//Farenhite to celcius

#include<iostream>
using namespace std;

int main(){
    cout<<"--Welcome to Farenhite to elcius converter--"<<endl;

    cout<<"Enter the Farenhite value: \n";
    double farenhite;
    cin>>farenhite;
    cout<<"You entered : "<<farenhite<<"F"<<endl;
    double celcius;

    celcius = (farenhite - 32)* (0.55);

    cout<<farenhite<<" is same as "<<celcius<<"celcius"<<endl;


    return 0;
}