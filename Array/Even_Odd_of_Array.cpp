#include <iostream>
using namespace std;
void iseven(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

void isodd(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

int main()
{
    int n;
    cout << "Enter the number of Elements : ";
    cin >> n;
    int array[n];
    cout << "Enter " << n << " values of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    cout << "Even numbers of the Arrays are : ";
    iseven(array, n);
    cout << "Odd numbers of the Arrays are : ";
    isodd(array, n);
    return 0;
}
