#include <iostream>

using namespace std;

class node{
    public:
        int data;
        node* next;
        node()
        {
            data = 0;
            next = NULL;
        }
        node(int a)
        {
            data = a;
            next = NULL;
        }
};

int main()
{
    struct node
    {
        int data;
        node* next;
    };
    

    return 0;
}