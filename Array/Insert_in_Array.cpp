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
    cout << "Enter position to insert (0-based index): ";
    cin >> pos;
    cout << "Enter value to insert: ";
    cin >> val;

    // Shift elements right from end to position
    for (int i = n; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[pos] = val;
    n++; // array size increases

    cout << "Array after insertion: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
