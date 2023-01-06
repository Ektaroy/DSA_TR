// Remove Last in Linked List
void removelast(Node*head)
{
    if(head==NULL)
    return ;
    if(head->next==NULL)
    {
        head=NULL;
        return head;
    }
    
    Node*temp=head;
    while (temp->next!=NULL)
    {
       temp=temp->next;
    }
    temp=NULL;
    return ;
    
}