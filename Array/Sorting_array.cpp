#include <iostream>
#include <algorithm>
using namespace std;
bool Sorting_Array(int array[], int n)
{
    for (int i = 1; i < n; i++)
    {
        if (array[i] < array[i - 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin >> n;

    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    if (Sorting_Array(array, n) == false)
    {
        cout << "Not Sorted" << endl;
    }
    else
    {
        cout << "Sorted" << endl;
    }
    sort(array, array + n);

    cout << "Sorted values: ";
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
    return 0;
}
