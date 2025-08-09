#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    if (n < 2)
    {
        cout << "No second largest number exists.";
        return 0;
    }
    int largestnumber, secondlargestnumber;
    if (array[0] > array[1])
    {
        largestnumber = array[0];
        secondlargestnumber = array[1];
    }
    else
    {
        largestnumber = array[1];
        secondlargestnumber = array[0];
    }

    for (int i = 2; i < n; i++)
    {
        if (array[i] > largestnumber)
        {
            secondlargestnumber = largestnumber;
            largestnumber = array[i];
        }
        else if (array[i] > secondlargestnumber && array[i] != largestnumber)
        {
            secondlargestnumber = array[i];
        }
    }
    if (largestnumber == secondlargestnumber)
    {
        cout << "There is no secondlargest number." << endl;
    }
    else
        cout << "The Second Largest number is: " << secondlargestnumber;
    return 0;
}