#include <iostream>
using namespace std;
struct node
{
    char name[20];
    int age;
    node *nxt;
};
int main()
{
    int c=0, j;
    node *start = NULL;
    node *temp;
    temp = new node;
    cout << "Please enter the name of the person : ";
    cin >> temp->name;
    cout << "Please enter the age of the person : ";
    cin >> temp->age;
    temp->nxt = NULL;

    if (start == NULL)
    {
        start = temp;
    }
       k:
    if (j == 1)
    {
         temp =new node;
        cout << "Enter the new node person name : ";
        cin >> temp->name;
        cout << "Enter the new node person age : ";
        cin >> temp->age;
        temp->nxt = start;
        start = temp;
    }
    int l;
    cout << "Do you want to add the new node enter 1 else exit : ";
    cin >> l;
    if (l == 1)
    {
        j = 1;
        goto k;
    }
    temp = start;
    while (temp != NULL)
    {
        cout << "\t" << c+1 << ". " << temp->name << "\n \t   " << temp->age<<endl;
        temp = temp->nxt;
        c++;
    }
    cout << "\n \t Total nodes are  : " << c<<endl;
    return 0;
}