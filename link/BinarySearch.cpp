#include <iostream>
#include <string>
using namespace std;
int main()
{
    int arr[20], item, n, loc = -1;
    char start;
    cout << "How many element do you want add :";
    cin >> n;
    // The function to insert each array elements
    for (int j = 0; j < n; j++)
    {
        cout << "\nPlease enter the " << j + 1 << ": element : ";
        cin >> arr[j];
    }
    // display the unsorted elements
    cout << "\n\nThe UnSorted elemnet is : ";
    for (int y = 0; y < n; y++)
        cout << arr[y] << ", ";
    // The sorting function
    for (int k = 0; k < n; k++)
    {
        for (int l = 0; l < n - 1; l++)
        {
            if (arr[l] > arr[l + 1])
            {
                int temp = arr[l];
                arr[l] = arr[l + 1];
                arr[l + 1] = temp;
            }
        }
    }
    // dislplay the sorted array
    cout << "\n\nThe sorted array is : ";
    for (int m = 0; m < n; m++)
    {
        cout << arr[m] << ", ";
    }
    //  function start binary search
    do
    {
        cout << "\n\nPlease enter item you want to search : ";
        cin >> item;
        int top = n - 1, bottom = 0;
        int middle = (top + bottom) / 2;
        if (arr[middle] == item)
        {
            loc = middle + 1;
        }
        while ((item != arr[middle]) && (bottom <= top))
        {
            if (item < arr[middle])
            {
                cout << "Hello!! item is lessthan the Middle !!!" << endl;
                top = middle - 1;
            }
            else
            {
                cout << "Hello!! item is greater than the Middle !!!" << endl;
                bottom = middle + 1;
            }
            middle = (top + bottom) / 2;
            loc = middle + 1;
        }
        if (loc != -1)
        {
            cout << "The item is found at " << loc << " Location" << endl;
        }
        else
        {
            cout << "\nThe item is not found !!!" << endl;
        }
        cout << "\nIf you want to continue the function Press (Y/y) : ";
        cin >> start;
    } while (start == 'Y' || start == 'y');
    return 0;
}