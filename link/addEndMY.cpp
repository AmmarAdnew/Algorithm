#include <iostream>
using namespace std;
struct student
{
    char Name[20];
    int age;
    student *nxt;
};
student *start = NULL;
// student *addData();

int main()
{
    int counter = 0;
    int loop;
    student *st = new student;
    while (true)
    {
        student *st = new student;
        cout << "\nEnter Name: ";
        cin >> st->Name;
        cout << "Enter Age: ";
        cin >> st->age;
        st->nxt = NULL;
        
        if (start == NULL)
            start = st;
        else if(start->nxt==NULL)
            start->nxt = st;
        else
        {
            student *temp = start;
            while (temp->nxt != NULL)
                temp = temp->nxt;
            temp->nxt = st;
        }
        cout << "Do you want to add a new node? Enter 1 to continue, else exit : ";
        cin >> loop;
        if (loop != 1)
            break;
    }

    st = start;
    while (st != NULL)
    {
        cout << counter + 1 << ". "
             << "Name: " << st->Name << endl;
        cout << "    Age: " << st->age << endl;

        st = st->nxt;
        cout << endl;
        counter++;
    }
    cout << "\nTotal number of nodes are : " << counter << endl;
}
// student *addData(){
//     student *st = new student;
//     cout << "\nEnter Name: ";
//     cin >> st->Name;
//     cout << "Enter Age: ";
//     cin >> st->age;
//     st->nxt = NULL;
//     return st;
// }
