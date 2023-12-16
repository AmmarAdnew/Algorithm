#include <iostream>
using namespace std;
int main()
{
    
    int arr[20], loc = -1, i = 1, item, n;
    cout << "\n how many element do you want to add :";
    cin >> n;
    for (int j = 0; j < n; j++)
    {
        cout << "\nPlease enter the " << j + 1 << ": element : ";
        cin >> arr[j];
    }
    cout << "\n Your array has the following elements : ";
    for (int k = 0; k < n; k++)
        cout << arr[k] << ", ";
    cout << "\nPlease enter the item you want to search : ";
    cin >> item;
    for (int b = 0; b < n; b++)
    {
        if (arr[b] == item)
        {
            loc = b + 1;
        }
    }
        if (loc != -1)
        {
            cout << "\nitem is found at " << loc << " position\n";
        }
        else
        {
            cout << "\nitem is not found\n";
        }
    return 0;
}