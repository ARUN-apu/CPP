#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Range of the Array: ";
    cin >> n;

    int arr[100]; // Use fixed size to allow insertion
    cout << "Enter Elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int pos, val;
    cout << "Enter position to Delete (0-based index): ";
    cin >> pos;
    // cout << "Enter value to insert: ";
    // cin >> val;

    for (int i = pos; i < n; i++)
    {
        arr[i] = arr[i + 1];
    }

    // arr[pos] = val;
    n--;

    cout << "Array after Deletion: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
