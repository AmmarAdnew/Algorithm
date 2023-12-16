#include <iostream>
#include<string>
using namespace std;
struct node
{
   string name ;
    int age;
    node *nxt;
};

int main()
{
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
        //cout << "\nName\n";
        cout <<"\t"<<temp->name<<endl;
        //cout << "\nage\n";
        cout <<"\t"<< temp->age;
        return 0;
    }
}