#include <iostream>
#include <windows.h>

using namespace std;

struct node
{
    int data;
    node * next;
};

node * track_ptr ;

void insert_node_beg(int data)
{
    node * start_ptr;
    cout<<"Start pointer BEFORE: "<<start_ptr << endl;
    cout<<"track pointer BEFORE: "<<track_ptr << endl;



    node * temp = new node;
    temp->data = data;
    if(start_ptr == 0)
    {
        temp->next=NULL;
        return;
    }else{
        temp->next = start_ptr;
        start_ptr = temp;
    }
    track_ptr = start_ptr;
    cout<<"Start pointer AFTER: "<<start_ptr << endl;
    cout<<"track pointer after: "<<track_ptr << endl;


}

void display_nodes()
{
    node * start_ptr;
    start_ptr = track_ptr;
    
    if (start_ptr == NULL)
    {
        cout<<"The list is empty";
        return;
    }else{
        node * temp = start_ptr;
        while(temp->next != NULL){
            cout<<"temp>data : "<<temp->data<<endl;
            cout<<"temp>next : "<<temp->next;
            cout<<endl;  
        }
    }

}


int main(){
    
    int data; char a;

    system("cls");
    do{
        cout<<"Enter the data of node : ";
        cin>>data;
        cout<<endl;
        insert_node_beg(data);
        cout<<"Do you want to insert another node ?(y/n) ";
        cin>>a;
    }while(a == 'Y' || a == 'y');

    display_nodes();

    return 0;
}