#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter the range of 1st Array: ";
    cin >> a;
    int arr1[a];
    cout << "Enter the value of 1st Array: " << endl;
    for (int i = 0; i < a; i++)
    {
        cin >> arr1[i];
    }

    cout << "Elements of 1st Array: " << endl;
    for (int i = 0; i < a; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;

    cout << "Enter the range of 2nd Array: ";
    cin >> b;
    int arr2[b];
    cout << "Enter the value of 2nd Array: " << endl;
    for (int i = 0; i < b; i++)
    {
        cin >> arr2[i];
    }

    cout << "Elements of 2nd Array: " << endl;
    for (int i = 0; i < a; i++)
    {
        cout << arr2[i] << " ";
    }
    cout << endl;

    int merged_array[a + b];
    //"Coping Array a to merge_Array " << endl;
    for (int i = 0; i < a; i++)
    {
        merged_array[i] = arr1[i];
    }

    // "Coping Array b to merge_Array " << endl;
    for (int i = 0; i < b; i++)
    {
        merged_array[a + i] = arr2[i];
    }

    // Print Merged Array
    cout << "Merge_Array " << endl;
    for (int i = 0; i < a + b; i++)
    {
        cout << merged_array[i] << " " << endl;
    }
    return 0;
}