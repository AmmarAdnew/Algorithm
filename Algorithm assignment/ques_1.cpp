#include <iostream>
#include <windows.h>


using namespace std;

// SOME SHORT HAND FUNCTIONS

void cls(){ system("cls");};
void jump_line(){ cout<<endl;};

// Global variables 

int inpu;

void bubble_sort(string arr[] , int x)
{
    string temp;
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
}

void select_sort(string arr[] , int num)
{
    int y , loc;
    string min, x;

    for (int i = 0; i <= num - 1 ; i++){
        x = arr[i];
        min = x;
        for (int j = i+1; j <= num - 1; j++ ){
            if (min > arr[j]){
                min = arr[j];
                loc = j;
            }
        }
        arr[i] = min;
        arr[loc] = x;
    }
    for( int z  = 0 ; z < 5 ; z++){
        cout<<arr[z]<<" ";
    }
}

void menu()
{
    int input;
    string arr[input];

    cout<<endl<<"      "<<"WELCOME TO GROUP-5 Q-1 SORTING AND SERACHING PROGRAM"<<endl<<endl;
    cout<<"ENTER THE NUMBER OF NAMES THAT YOU ARE GOING TO ENTER? ";
    cin>>input;
    int x = input;

    for (int i = 0 ; i < input ; i++){
        cout<<"Enter the "<<(i+1)<<" element : ";
        cin>>arr[i];
    }

    cout<<endl<<"------------------------------------------";

    cout<<endl<<"This is the unsorted array : [";
    for(int i = 0 ; i < input ; i++)
        {
            if (i < input)
            {
                cout<<" "<<arr[i];
            }
            if (i == input -1){
                break;
            }
            cout<<" ,";
        }
    cout<<"]"<<endl<<"------------------------------------------"<<endl;


    int a;
    jump_line();
    cout<<"Enter 1 : for BUBBLE SORT"<<endl;
    cout<<"Enter 2 : for SELECTION SORT"<<endl;
    cout<<"Enter 3 : for INSERTION SORT"<<endl;
    cout<<"Enter 4 : for LINEAR SEARCH"<<endl;
    cout<<"Enter 5 : for BINARY SEARCH"<<endl;
    jump_line();
    cout<<"-> ";
    cin>>a;
    
    if (a>0 && a<6)
    {
        switch(a)
        {
            case 1:
                bubble_sort( arr[] , input);
                break;
            // case 2:
            //     // select_sort(arr[input], input); 
            //     break;
            // case 3:
            //     // insertion_sort(arr[input], input); 
            //     break;
            // case 4:
            //     // linear_search(arr[input], input); 
            //     break;
            // case 5:
            //     // binary_search(arr[input], input); 
            //     break;
            
        }
    }else{
        cout<<"Invalid INPUT please enter the correct value !";
    }
}

void show_sorted_arr(string arr[], int input)
{
    cout<<endl<<"------------------------------------------";

    cout<<endl<<"The sorted array looks like this : [";
    for(int i = 0 ; i < input ; i++){
            if (i < input)
            {
                cout<<" "<<arr[i];
            }
            if (i == input -1){
                break;
            }
            cout<<" ,";
    }

    cout<<"]"<<endl<<"------------------------------------------"<<endl;

    inpu = input;
}

int main (){

    menu();

    return 0;
}



    // int k = 0, l , y ,swap;
    // while(k < y - 1){

    //     int l = 0;
    //     while(l < x - k - 1){

    //         if( arr[l] > arr[l+1]){
    //             swap = arr[l];
    //             arr[l] = arr[l+1];
    //             arr[l+1] = swap;
    //         }

    //         l++;
    //     }

    //     k++;
    // }