// Add at Index in Linked List

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

    void addatindex(Node *head, int data, int size, int idx)
    {
        if (size < idx || idx < 0)
        {
            cout << "Invalid Arguments";
            return;
        }
        else if (idx == 0)
        {
            addfirst(data);
            size++;
            return;
        }
        else if (idx == size)
        {
            addlast(data);
            size++;
            return;
        }
        else
        {
            Node *temp = head;
            int count = 0;
            while (temp != NULL)
            {
                if (idx == count - 1)
                {
                    Node *newnode = new Node(data);
                    newnode->next = temp->next;
                    temp->next = newnode;
                    size++;
                    return;
                }
                count++;
                temp = temp->next;
            }
        }
    }
};
