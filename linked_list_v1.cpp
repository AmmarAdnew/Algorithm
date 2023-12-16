#include <iostream>

using namespace std;

struct node
{
    int data;
    node *nxt;
};

int loop = 0;

node *start_ptr = NULL;

// node *track_start = start_ptr;

void add_at_beg(int a)
{
    node *temp = new node();
    cout << "be start address:" << start_ptr << endl;
    // cout<<"be start nxt address:"<<start_ptr->nxt<<endl;

    // create node

    temp->data = a;
    temp->nxt = NULL;

    // link start pointer to first node

    if (start_ptr == NULL)
    {
        start_ptr = temp;
    }
    else
    {
        temp->nxt = start_ptr;
        start_ptr = temp;
    }
    cout << "temp address:" << temp << endl;
    cout << "temp data:" << temp->data << endl;
    cout << "temp nxt address:" << temp->nxt << endl;

    cout << "af start address:" << start_ptr << endl;
    cout << "af start nxt address:" << start_ptr->nxt << endl;
    cout << endl;
    cout << endl;
    cout << endl;
}

void add_at_end(int a)
{
    node *tem = new node();
    tem->data = a;
    tem->nxt = NULL;

    // track_start = start_ptr;

    if (start_ptr == NULL)
    {
        cout << "strat address : " << start_ptr << endl;
        cout << "tem address : " << tem << endl;
        cout << "tem data : " << tem->data << endl;
        cout << "tem nxt data : " << tem->nxt << endl;
        cout << "node inserted when null." << endl;
        start_ptr = tem;
    }
    else if (start_ptr->nxt == NULL)
    {
        // cout << "strat 1 address : " << start_ptr << endl;
        // cout << "start 1 nxt data : " << start_ptr->nxt << endl;
        cout << "tem 1 address : " << tem << endl;
        cout << "tem 1 data : " << tem->data << endl;
        cout << "tem 1 nxt data : " << tem->nxt << endl;
        cout << "inserted 1 when the start nxt = null." << endl;
        start_ptr->nxt = tem;
    }
    else
    {
        // for (int i = 0; i < loop; i++)
        // {
        //     cout << "strat address : " << start_ptr << endl;
        //     cout << "start nxt data : " << start_ptr->nxt << endl;
        //     cout << "looop + 1" << endl;
        //     start_ptr = start_ptr->nxt;
        //     cout << "tem address : " << tem << endl;
        //     cout << "tem data : " << tem->data << endl;
        //     cout << "tem nxt data : " << tem->nxt << endl;
        // }
        // start_ptr->nxt = tem;
        // cout << "out of loop." << endl;
        // tem = tem->nxt;

        node *track = start_ptr;

        while (track->nxt != NULL)
            track = track->nxt;
        track->nxt = tem;
        cout << "inserted successfully at the end" << endl;
    }
    // start_ptr = track_start;
}

void at_any_loc(int data, int loc)
{
    node *temp = new node();

    temp->data = data;

    if (start_ptr == NULL)
        cout << "The List is empty" << endl;

    else
    {
        node *tem = start_ptr;
        int i = 1;
        bool found = false;
        while (tem->nxt != NULL)
        {
            if (loc == i)
            {
                temp->nxt = tem;
                tem = temp;

                found = true;
            }
            tem = tem->nxt;
            i++;
        }
    }
}

void display()
{
    while (start_ptr != NULL)
    {
        cout << "data : " << start_ptr->data << endl;
        start_ptr = start_ptr->nxt;
    }
}

int main()
{

    // cout<<temp->data<<endl;
    // cout<<temp->nxt<<endl;

    // start_ptr = temp;

    // seco node

    // node * temp2 = new node();

    // temp2->data = 4;
    // temp2->nxt = temp;

    // start_ptr = temp2;

    // cout<<"address : "<<start_ptr<<endl;
    // cout<<"address : "<<start_ptr->nxt<<endl;
    // cout<<"temp2 address : "<<temp2<<endl;
    // cout<<"temp2 data : "<<temp2->data<<endl;
    // cout<<"temp2 nxt data : "<<temp2->nxt<<endl;
    // cout<<"temp address : "<<temp<<endl;
    // cout<<"temp data : "<<temp->data<<endl;
    // cout<<"temp nxt data : "<<temp->nxt<<endl;
    int loc, data;
    char b;
    do
    {
        cout << "enter the data of the node :";
        cin >> data;
        cout << " enter the location you want to add the node :";
        cin>> loc;
        at_any_loc(data, loc);
        cout << "Do you want to insert another node ?(y/n)";
        cin >> b;
        loop++;
    } while (b == 'y' || b == 'Y');

    display();

    return 0;
}