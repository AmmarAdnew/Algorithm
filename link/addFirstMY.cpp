#include <iostream>
using namespace std;
struct node
{
    char name[20];
    int age;
    node *nxt;
};
node *start = NULL;

int main()
{
    int loop = 0;
    int c = 0;
    node *temp = new node;
    while (true)
    {
        node *temp = new node;
        cout << "Please enter the name : ";
        cin >> temp->name;
        cout << "Please enter the age : ";
        cin >> temp->age;
        temp->nxt = NULL;

        if (start == NULL)
            start = temp;
        else{
            temp->nxt=start;
            start=temp;
        }
        
        cout << "Do you want to add the new node enter 1 else exit : ";
        cin >> loop;
        if (loop != 1)
            break;
    }

    temp = start;
    while (temp != NULL)
    {
        cout << "\t" << c + 1 << ". " << temp->name << "\n \t   " << temp->age << endl;
        temp = temp->nxt;
        c++;
        cout<<endl;
    }
    cout << "\n \t Total nodes are  : " << c << endl;

    return 0;
}