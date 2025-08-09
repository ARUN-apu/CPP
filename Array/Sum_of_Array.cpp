// #include <iostream>
// using namespace std;
// int sum_Array(int arr[], int n)
// {
//     int ans = 0;
//     for (int i = 0; i < n; i++)
//     {
//         ans = ans + arr[i];
//     }
//     return ans;
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
//     int sum = sum_Array(arr, n);
//     cout << sum;
//     return 0;
// }

#include <iostream>
using namespace std;
int add(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int n;
    cout << "Enter the Range of the Array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the Array Elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "The sum of Array Elements is : " << add(arr, n) << endl;
    return 0;
}