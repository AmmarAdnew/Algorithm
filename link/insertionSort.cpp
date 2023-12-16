#include <iostream>
using namespace std;
int main()
{
    int arr[30], n;
    cout << "Enter the amount of elements : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }
    cout << "Unsorted elements are : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ",";
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i; j >= 0; j--)
        {
            if (arr[j] > arr[j + 1])
            {
                int swap = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = swap;
            }
        }
        cout << "\n\npass " << i + 1 << ": ";
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << ", ";
        }
        cout << endl;
    }
    cout << "\nsorted elements are : ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << ", ";
    return 0;
}