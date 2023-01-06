// Kth element from the end in Linked List

Node*kfromend(Node*head,int k)
{
    Node*s=head;
    Node*f=head;
    
for(int i=0;i<k;i++)
{
    f=f->next;
}

while(f!=NULL)
{
    s=s->next;
    f=f->next;
}

    return s;
}