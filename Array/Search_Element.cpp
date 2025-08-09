// #include <iostream>
// using namespace std;
// void search(int arr[], int n)
// {
//     int x;
//     cout << "Enter the number you Search for:  " << endl;
//     cin >> x;
//     bool found = false; // flag to check if number is found

//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == x)
//         {
//             cout << "The number " << x << " is found at index " << i << "." << endl;
//             found = true;
//             break; // optional: stops after first match
//         }
//     }

//     if (!found)
//     {
//         cout << "The number " << x << " is not in the array." << endl;
//     }
// }

// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     search(arr, n);
//     return 0;
// }

#include <iostream>
using namespace std;
int search(int arr[], int n, int x)
{

    for (int i = 0; i < n; i++)
    {
        if (x == arr[i])
            return i;
    }
    return -1;
}

int main()
{
    int n;
    cout << "Enter the Range of the Array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the Array Elements: ";
    int i;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int x;
    cout << "Enter the Element you search for : ";
    cin >> x;
    int index = search(arr, n, x);
    if (index != -1)
        cout << "The Element " << x << " is found in the Array at index " << index << endl;
    else
    {
        cout << "The Element " << x << " is not found in the Array ." << endl;
    }
    return 0;
}