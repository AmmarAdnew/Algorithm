#include <iostream>

using namespace std;

struct node
{
    int index;
    int data;
    node * next;
};

int pos = 0;
node *start_ptr = NULL;
node * track_ptr = start_ptr;

void add(int a , int posi)
{
    node * temp = new node;
    temp->index = pos;
    temp->data = a;
    temp->next = NULL;

    if ( posi = 0){
        start_ptr = temp;
    }
    else{
        node * tem = new node;
        tem = start_ptr;
        do{
            tem = tem->next;
            cout<<tem->index<<". tem node data = "<<tem->data<<"."<<endl;
            if (tem->next == NULL){
                cout<<"breaked the loop"<<endl;
                break;
            }
        }while(posi != tem->index);
    }
    
    cout<<pos<<". New node data = "<<a<<"."<<endl;
    cout<<"   New node next = "<<temp->next<<"."<<endl;
    cout<<"   New node index = "<<temp->index<<"."<<endl;

    pos++;
}



int main()
{
    // linked_list a;
    // a.add_node(1);
    // a.add_node(2);

    // node *start_ptr = NULL;
    // node * temp = new node;

    // temp->data = 2;
    // temp->next = NULL;

    // start_ptr = temp;
    // cout<<"first node pointer = "<< temp->next <<"."<<endl;

    // cout<<"first node data = "<< temp->data << "."<<endl;
    int data,position; char a;
    do {
        cout<<"enter the data of the node :";
        cin>>data;
        cout<<"Availaible position [0 - "<<pos<<" ] to insert the node : ";
        cin>>position;
        add(data,position);
        cout<<"Do you want to insert another node ?(y/n)";
        cin>>a;
    }while (a == 'y' || a == 'Y');

    // node* start_ptr = NULL;
    // node * tem = new node;
    // for (int i=0 ; i < pos ; i++)
    // {
    //     tem = start_ptr;
    //     tem 
    //     cout<<(i + 1)<<" node "<<
    // }

    return 0;
}