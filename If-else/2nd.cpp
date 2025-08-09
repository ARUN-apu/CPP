//Write a C++ program to find maximum between three numbers.
#include<iostream>
using namespace std;

int main() {
    int m, n, o;
    cout << "Enter m, n, and o: ";
    cin >> m >> n >> o;

    if (m >= n && m >= o) {
        cout << m << " is the maximum between the three numbers." << endl;
    } else if (n >= m && n >= o) {
        cout << n << " is the maximum between the three numbers." << endl;
    } else {
        cout << o << " is the maximum between the three numbers." << endl;
    }

    return 0;
}
