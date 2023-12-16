#include <iostream>
using namespace std;
int main()
{
    char loop;
    int arr[20], item, n;
    cout << "Enter the amount of data : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }

    // display unsorted array elements
    cout << "\nUnsorted elements are : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ", ";
    }

    // function to sort
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int swap = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = swap;
            }
        }
    }
    // display sorted elements
    cout << "\nSorted elements are : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ", ";
    }

    // function to binarySearch
    while (loop != 'N' && loop != 'n')
    {
        cout << "\n\nEnter the number you want to saerch : ";
        cin >> item;

        int top = n - 1, bottom = 0;
        while (top >= bottom)
        {
            int middle = (top + bottom) / 2;
            if (arr[middle] == item)
                cout << "\nThe number is found at postion : " << middle + 1 << endl;

            if (item > arr[middle])
            {
                bottom = middle + 1;
            }
            else
            {
                top = middle - 1;
            }
        }
        cout << "\nPress any key to continue except (N/n) : " ;
        cin >> loop;
    }

    return 0;
}