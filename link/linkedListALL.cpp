#include <iostream>
using namespace std;

// structure declaration
struct student
{
    int id;
    char name[20];
    student *nxt;
};
student *start = NULL;

// method declarations
student *addData();
void insertAfter_Id(int id);
void insertFirst();
void insertEnd();
void display();
void deleteEnd();
void deleteFirst();
void deleteBySearch(int id);

// main method
int main()
{
    int choice = 0, loop = 0;
    while (loop == 0)
    {
        cout << "\n---------------------------------------------------------";
        cout << "\nEnter 0 to exit.";
        cout << "\nEnter 1 for display the data.";
        cout << "\nEnter 2 for insert data at the beggining of the node.";
        cout << "\nEnter 3 for insert data at the end of the node.";
        cout << "\nEnter 4 for add by search.";
        cout << "\nEnter 5 for delete the first node.";
        cout << "\nEnter 6 for delete the end node";
        cout << "\nEnter 7 for delete the node by search.";
        cout << "\n---------------------------------------------------------" << endl;
        cout << "\nPlease enter your chioce : ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            display();
            break;
        case 2:
            insertFirst();
            cout << "\nData insert successfully!!!" << endl;
            break;
        case 3:
            insertEnd();
            cout << "\nData insert successfully!!!" << endl;
            break;
        case 4:
            int id;
            cout << "\nEnter the ID to be search : ";
            cin >> id;
            insertAfter_Id(id);
            break;
        case 5:
            deleteFirst();
            cout << "\n Delete the first node seccessfully !!!" << endl;
            break;
        case 6:
            deleteEnd();
            cout << "\n Delete the end node seccessfully !!!" << endl;
            break;
        case 7:
            cout << "\n Enter the id to be search : ";
            cin >> id;
            deleteBySearch(id);
            break;
        case 0:
            loop = 1;
            break;
        default:
            cout << "\nunknown input !!! " << endl;
            break;
        }
    }
    return 0;
}

// function to display the nodes
void display()
{
    int counter = 1;
    student *st = start;
    if (st == NULL)
        cout << "\n No Data !!! " << endl;
    else if (st->nxt == NULL)
    {
        cout << counter << ". "
             << "Name: " << st->name << endl;
        cout << "     ID: " << st->id << endl;
        cout << endl;
    }
    else
    {
        while (st != NULL)
        {
            cout << counter << ". "
                 << "Name: " << st->name << endl;
            cout << "     ID: " << st->id << endl;
            st = st->nxt;
            cout << endl;
            counter++;
        }
    }
    cout << "\nTotal number of nodes are : " << counter - 1 << endl;
}

// funcion to add data to the node
student *addData()
{
    student *st = new student;
    cout << "\nEnter Name: ";
    cin >> st->name;
    cout << "Enter ID: ";
    cin >> st->id;
    st->nxt = NULL;
    return st;
}

// function to insert at the beggining
void insertFirst()
{
    student *st = addData();
    if (start == NULL)
        start = st;
    else
    {
        st->nxt = start;
        start = st;
    }
}

// function to insert at end node
void insertEnd()
{
    student *st = addData();
    if (start == NULL)
        start = st;
    else if (start->nxt == NULL)
        start->nxt = st;
    else
    {
        student *temp = start;
        while (temp->nxt != NULL)
            temp = temp->nxt;
        temp->nxt = st;
    }
}

// function to add at a specific position
void insertAfter_Id(int id)
{
    if (start == NULL)
        cout << "\nNo data in the list ! " << endl;
    else
    {
        student *st = start;
        bool found = false;
        while (st != NULL)
        {
            if (id == st->id)
            {
                student *st1 = st->nxt;   // reserve
                student *st2 = addData(); // create new node
                st->nxt = st2;
                st2->nxt = st1;
                found = true;
                break;
            }
            st = st->nxt;
        }
        if (found)
            cout << "\nSuccessfull !!!" << endl;
        else
            cout << "\nId is note found  !!!" << endl;
    }
}

// function to delete the first node
void deleteFirst()
{
    if (start == NULL)
        cout << "\n No data in the list." << endl;
    else
    {
        student *temp = start;
        start = start->nxt;
        delete temp;
    }
}

// function to delete the end node
void deleteEnd()
{
    if (start == NULL)
        cout << "\n No data in the list !!!" << endl;
    else if (start->nxt == NULL)
    {
        delete start;
        start = NULL;
    }
    else
    {
        student *temp = start, *s2;
        while (temp->nxt != NULL)
        {
            s2 = temp;
            temp = temp->nxt;
        }
        s2->nxt = NULL;
        delete temp;
    }
}

// Delete the node by search
void deleteBySearch(int id)
{
    if (start == NULL)
        cout << "\n No data in the list !!!" << endl;
    else
    {
        student *temp = start, *s2;
        bool found = false;
        while (temp != NULL)
        {
            if (id == temp->id)
            {
                s2->nxt = temp->nxt;
                delete temp;
                found = true;
                break;
            }
            s2 = temp;
            temp = temp->nxt;
        }

        if (found)
            cout << "\nSuccessfully delete !!!" << endl;
        else
            cout << "\nId is not found !!!" << endl;
    }
}