// Add First in Linked List

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    void addfirst(Node *head, int data)
    {
        Node *newnode = new Node(data);

        if (head == NULL)
        {
            head = newnode;
        }
        else
        {

            Node *temp = head;

            while (temp != NULL)
            {
                temp = temp->next;
            }

            temp->next = newnode;
        }
    }
};
