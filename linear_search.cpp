#include <iostream>

using namespace std;

int main(){
    int no_eln, search_eln , loc ;
    bool found;
    cout<<"         Welcome to linear search"<<endl;
    cout<<endl;
    cout<<"Enter the number of elements that the should have : ";
    cin>>no_eln;
    cout<<endl;

    int arr[no_eln];

    for(int i = 0; i< no_eln ; i++)
    {
        cout<<"Enter the " << (i + 1) << " element : ";
        cin>>arr[i];
    }

    cout<<"The array [";

    for (int i = 0 ; i < no_eln ; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<"]"<<endl;

    cout<<"Enter the element that's going to be searched :";
    cin>>search_eln;

    for (int i= 0 ; i < no_eln ; i++)
    {
        if (arr[i]==search_eln)
        {
            found = true;
            loc = i;
        }
    }

    if(found= true)
    {
        cout<<"The element is found in the array. In index "<<loc<<"." ;
    }
    else{
        cout<<"The element is not found.";
    }

    return 0;
}