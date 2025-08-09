// //Write a C++ program to check whether a number is prime, Armstrong or perfect number using functions.
// #include<iostream>
// #include<cmath>
// using namespace std;

// void check_prime(int n) {
//     if (n <= 1) {
//         cout << n << " is not a prime number." << endl;
//         return;
//     }

//     for (int i = 2; i < n; i++) {
//         if (n % i == 0) {
//             cout << n << " is not a prime number." << endl;
//             return;
//         }
//     }

//     cout << n << " is a prime number." << endl;
// }

// void check_Armstrong(int n){
//     int original = n;
//     int sum = 0;
//     int digits = 0;

//     int temp = n;
//     while(temp != 0){ // it should 153/10 = 15 digits = 0+1 =1 then 15/10 = 5 digits = 1+1=2; 5/10=0 digits = 2+1=3;
//        temp = temp / 10;
//         digits++;
//     }

//      temp = n;

//       while (temp != 0){
//          int digit = temp % 10; //153%10=3 sum
//          sum = sum + round(pow(digit,digits)); // Here i have to use "round" because pow give the double like 152.9999999 so it was showing 153 is not a Armstrong number that's whay we have to write round here
//          temp = temp / 10;
//       }

//       if(sum == original){
//         cout<<n<<" is a Armstrong number."<<endl;
//       }else{
//         cout<<n<<" is not a Armstrong number."<<endl;
//       }

//       return;
// }


// void check_perfect_number(int n){
//     int sum = 0;
//     for( int i = 1; i<= n/2; i++){
//         if(n%i == 0){
//         sum = sum+i;
//         }
//     }
//     if(sum == n){
//         cout<<n<<" it is a perfect number."<<endl;
//     }else{
//         cout<<n<<" it is not a perfect number."<<endl;
//     }
//     return;
// }

// int main() {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;

//     check_prime(num);
//     check_Armstrong(num);
//     check_perfect_number(num);
//     return 0;
// }

// //Write a C++ program to check whether a number is prime, Armstrong or perfect number using functions.
#include<iostream>
#include<cmath>
using namespace std;
void check_prime(int n){
    if(n<=1){
        cout<<n<<" is not a prime number."<<endl;
        return;
    }
    for(int i = 2; i<n; i++){
        if(n % i == 0){
            cout<<n<<" is not a Prime number."<<endl;
            return;
        }
    }
   cout<<n<<" is a prime number."<<endl;
    
}

void check_Armstrong(int n){
    int original = n;
    int sum = 0;
    int digits = 0;

    int temp = n;
    while(temp != 0){
        temp /= 10;
        digits++;
    }

    temp = n;
    while(temp != 0){
        int digit = temp % 10;
        sum = sum + round(pow(digit, digits));
        temp /= 10;
    }

    if(sum == original){
        cout<<n<<" is a Armstrong Number."<<endl;
    }else{
        cout<<n<<" is not a Armstrong Number."<<endl;
    }

    return;
}

void check_Perfect_number(int n){
    int sum = 0;
    for(int i = 1; i<= n/2; i++){ 
        if(n % i == 0){
        sum += i;
        }
    }

    if(sum == n){
        cout<<n<<" is a perfect number."<<endl;
    }else{
        cout<<n<<" is not a perfect number."<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    check_prime(n);
    check_Armstrong(n);
    check_Perfect_number(n);
    return 0;
}