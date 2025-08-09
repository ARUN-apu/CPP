// #include <iostream>
// using namespace std;
// void isSorted(int arr[], int n)
// {
//     bool sorted = true;
//     for (int i = 1; i < n; i++)
//     {
//         if (arr[i] < arr[i - 1])
//         {
//             sorted = false;
//             break;
//         }
//     }
//     if (sorted)
//     {
//         cout << "Array is Sorting in Assending Order." << endl;
//     }
//     else
//     {
//         cout << "Array is not Sorted " << endl;
//     }
// }

// int main()
// {
//     int n;
//     cout << "Enter the Array Range: ";
//     cin >> n;

//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     isSorted(arr, n);
//     return 0;
// }

// Desending Order
#include <iostream>
using namespace std;
void isSorted(int arr[], int n)
{
    bool sorted = true;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[i - 1])
        {
            sorted = false;
            break;
        }
    }
    if (sorted)
    {
        cout << "Array is Sorting in Desending Order." << endl;
    }
    else
    {
        cout << "Array is not Sorted " << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the Array Range: ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    isSorted(arr, n);
    return 0;
}