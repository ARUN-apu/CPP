#include<iostream>
#include<vector>

using namespace std;

int main(){
    //declare 2 empty vectors of integers named
    // vector1 and vector2 respectively.
    vector <int> vector1 ;
    vector <int> vector2;

    //Add 10 and 20 to vector1 dynamically using push back
    vector1.push_back(10);
    vector1.push_back(20);

    //Display the elements in vector1 using at() method as well as its size using the size() method
    cout<<"\nvector1: "<<endl;
    cout<<vector1.at(0)<<endl;
    cout<<vector1.at(1)<<endl;
    cout<<"vector 1 values are: "<<vector1.at(0)<<" and "<<vector1.at(1)<<endl;

    cout<<"size of vector 1: "<<vector1.size()<<endl;

    //Add 100 and 200 to vector1 using the at() method as well as its size using the size() method
    cout<<"\nvector2: "<<endl;
    vector2.push_back(100);
    vector2.push_back(200);

    cout<<vector2.at(0)<<endl;
    cout<<vector2.at(1)<<endl;
    cout<<"vector 2 values are: "<<vector2.at(0)<<" and "<<vector2.at(1)<<endl;

    cout<<"size of vector 2: "<<vector2.size()<<endl;

    //declare an empty 2D vector named as vector_2d
    // Remember,that a 2D vector is a vector of vector<int>
    
    vector <vector <int>> vector_2d;
    
    //Add vector1 to vector_2d dynamically using push_back
    //Add vector2 to vector_2d dynamically using push_back

    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    //Display the elements in vector_2d using the at() method
    
    cout<<"\nvector_2d values are: "<<endl;
    cout<<vector_2d.at(0).at(0) <<" "<<vector_2d.at(0).at(1)<<endl;
    cout<<vector_2d.at(1).at(0) <<" "<<vector_2d.at(1).at(1)<<endl;

    //change vector1 at(0) to 1000

    vector1.at(0) = 1000;

    //Display the elements in vector_2d again using the at() method
    
    cout<<"\nvector_2d values are: "<<endl;
    cout<<vector_2d.at(0).at(0) <<" "<<vector_2d.at(0).at(1)<<endl;
    cout<<vector_2d.at(1).at(0) <<" "<<vector_2d.at(1).at(1)<<endl;

    // Display the elements in vector1

    cout<<"\nvector1: "<<endl;
    cout<<vector1.at(0)<<endl;
    cout<<vector1.at(1)<<endl;
    cout<<"size of vector 1: "<<vector1.size()<<endl;


    return 0;
}