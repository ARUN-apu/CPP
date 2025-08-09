#include <iostream>
using namespace std;
int max(int arr[], int n)
{
    int ans = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > ans)
        {
            ans = arr[i];
        }
    }
    return ans;
}

int min(int arr[], int n)
{
    int ans = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < ans)
        {
            ans = arr[i];
        }
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Maximum value of the Array : " << max(arr, n) << endl;
    cout << "Minimum value of the Array : " << min(arr, n) << endl;
}