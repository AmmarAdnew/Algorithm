#include <iostream>

using namespace std;

int main (){
    int input;

    cout<<endl<<"      "<<"Welcome to bubble sort"<<endl<<endl;
    cout<<"How many elements should the array have? ";
    cin>>input;
    int x = input;
    int arr[input];

    for (int i = 0 ; i < input ; i++){
        cout<<"Enter the "<<(i+1)<<" element : ";
        cin>>arr[i];
    }

    cout<<endl<<"------------------------------------------";

    cout<<endl<<"This is the unsorted array : [ ";
    for(int i = 0 ; i < input ; i++){
        cout<<arr[i]<<" ";
    }

    cout<<"]"<<endl<<"------------------------------------------"<<endl;

    int temp;

    for(int i = 0; i < x - 1 ; i++){
        cout<<endl<<"Pass "<<(i+1)<<" :"<<endl<<endl;
        for(int j = 0 ; j < x - i - 1 ; j++){
            if ( arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            cout<<(j+1)<<" step"<<" - [ ";
            for( int z  = 0 ; z < x ; z++){
                cout<<arr[z]<<" ";
            }
            cout<<"]"<<endl;
        }
    }

    int k = 0, l , y ,swap;
    while(k < y - 1){

        int l = 0;
        while(l < x - k - 1){

            if( arr[l] > arr[l+1]){
                swap = arr[l];
                arr[l] = arr[l+1];
                arr[l+1] = swap;
            }

            l++;
        }

        k++;
    }

    cout<<endl<<"The sorted array looks like this"<<" : [ ";
    for( int z  = 0 ; z < input ; z++){
        cout<<arr[z]<<" ";
    }
    cout<<"]"<<endl;
    return 0;
}