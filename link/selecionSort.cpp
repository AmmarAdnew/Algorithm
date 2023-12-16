#include <iostream>
using namespace std;
int main()
{
    int arr[30], smallest, n;
    cout << "Enter the amount of elments : ";
    cin >> n;
    // insert data
    for (int i = 0; i < n; i++)
    {
        cout << "element " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "unsorted elements are : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ", ";
    }
    for (int i = 0; i < n - 1; i++)
    {
        smallest = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[smallest] > arr[j])
            {
                smallest = j;
            }
        }
        if (smallest != i)
        {
            int swap = arr[smallest];
            arr[smallest] = arr[i];
            arr[i] = swap;
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