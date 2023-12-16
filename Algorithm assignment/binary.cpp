#include <iostream>

using namespace std;

int main()
{

    int no_eln, search_eln , loc ;
    bool found, fa;
    cout<<"         Welcome to binary search"<<endl;
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

    cout<<"The unsorted array [";

    for (int i = 0 ; i < no_eln ; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<"]"<<endl;

    int temp;

    for(int i = 0; i < no_eln - 1 ; i++){
        // cout<<endl<<"Pass "<<(i+1)<<" :"<<endl<<endl;
        for(int j = 0 ; j < no_eln - i - 1 ; j++){
            if ( arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            // cout<<(j+1)<<" step"<<" - [ ";
            // for( int z  = 0 ; z < no_eln ; z++){
            //     cout<<arr[z]<<" ";
            // }
            // cout<<"]"<<endl;
        }
    }

    cout<<"The sorted array [";

    for (int i = 0 ; i < no_eln ; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<"]"<<endl;

    cout<<"Enter the element that's going to be searched :";
    cin>>search_eln;

    int mid = no_eln/2, l=0 , r = no_eln-1;

    do{
        cout<<mid<<endl;
        if(search_eln==arr[mid]){
            cout<<"found"<<endl;
            found = true;
            fa = true;
            loc = mid;
            // cout<<"The element is found in the array. In index "<<loc<<"." ;
        }
        else if(search_eln > arr[mid])
        {
            cout<<"L updated"<<endl;
            l = mid + 1;
            mid = (l + r)/2;
            loc = mid;
        }
        else if(search_eln < arr[mid])
        {
            cout<<"R updated"<<endl;
            r = mid - 1;
            mid = (l + r)/2;
            loc = mid;
        }
        else if(r > l){
            cout<<"r > l"<<endl;
            found = true;
        }

    }while(found=false);

    if (r > l){
        cout<<"The element is not found.";
    }
    if (fa = true)
    {
        cout<<"The element is found in the array. In index "<<loc<<"." ;
    }

    return 0;
}