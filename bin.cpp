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
        for(int j = 0 ; j < no_eln - i - 1 ; j++){
            if ( arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
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

    int mid = no_eln/2, l=0 , r = no_eln-1 , i = 1;

    do{
        cout<<"   The " << i << " pass : "<<endl;
        cout<<"value of mid : "<< mid <<endl;

        if ( search_eln < arr[mid] ){
            cout<<"value of r : " << r << endl;
            r = mid - 1;
        }
        else if ( search_eln == arr[mid] ){
            cout<<"Loop has breaked."<<endl;
            break;
        }
        else if( r <= l ){
            cout<<"Loop has breaked. r < l ."<<endl;
            break;
        }
        else {
            cout<<"value of L : " << l << endl;
            l = mid + 1;
        }
        mid = ((l+r)/2);
        cout<<"value of r : " << r << endl;
        cout<<"value of L : " << l << endl;
        cout<<endl;
        i++;
    }while((arr[mid] != search_eln));

    // while(l >= r)
    // {
    //     mid = (l+r)/2;
    //     if (arr[mid] == search_eln)
    //     {
    //         return mid;
    //     }else if (arr[mid] > search_eln)
    //     {
    //         cout<<mid<<"  r"<<endl;
    //         l = mid + 1;
    //     }else{
    //         r = mid - 1;
    //         cout<<mid<<"  r"<<endl;
    //     }
    //     cout<<mid<<endl;
    // }

    if ( search_eln == arr[mid]){
        cout<<endl;
        cout<<"The element "<< search_eln <<" is found in the array. In index "<<mid<<"." ;
    }
    else{
        cout<<endl;
        cout<<"The element is not found in the array." ;
    }
    return 0;
}