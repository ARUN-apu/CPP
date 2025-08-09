#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter array Range: ";
    cin >> n;

    int original[n], copy[n];
    // Taking Input for Original Array
    cout << "Enter Original Array elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> original[i];
    }
    // Printing Original Array
    cout << "Original Array Elements are: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << original[i] << " ";
    }
    cout << endl;
    // Copying Array
    for (int i = 0; i < n; i++)
    {
        copy[i] = original[i];
    }
    // Printing the Copied Array Elements
    cout << "Copy Array Elements are: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << copy[i] << " ";
    }
    cout << endl;
}
