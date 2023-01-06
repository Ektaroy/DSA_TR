/****************************************************************
 
    Following is the class structure of the Node class:

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
        };

*****************************************************************/

Node *reversehelper(Node *head) {
  // Write your code here
  if (head == NULL || head->next == NULL)
    return head;

  Node *ans = reversehelper(head->next);
  Node *temp = ans;
  while (temp->next != NULL) {
    temp = temp->next;
  }
  temp->next = head;
  head->next = NULL;
  head = ans;
  return head;
}

pair<Node *, Node *> reverse(Node *head) {
	Node*h= reversehelper(head);
	Node*t= h;

if(h==NULL)
{

  pair<Node *, Node *> p;
  p.first = h;
  p.second = h;
  return p;
}

while(t->next!=NULL)
{
t=t->next;
}

	pair<Node*,Node*> p;
	p.first=h;
	p.second=t;
	return p;
	 
	  }

int size(Node*head)
{
	int ans=0;
	Node*temp=head;
	while(temp!=NULL)
	{
		temp=temp->next;
		ans++;
	}
	return ans;
}
Node *kReverse(Node *head, int k)
{
	//Write your code here

if(head==NULL)
return head;

	if(size(head)<=k)
	{
          pair<Node *, Node *> p=reverse(head);
        
          return p.first;
        }
	

	
	Node*temp=head;

Node*h1=head;
Node*t1=head;

	for(int i=0;i<k-1;i++ ){
		t1=t1->next;
	}

Node*h2=t1->next;
t1->next=NULL;
        pair<Node *, Node *> p=reverse(h1);
		h1=p.first;
		t1=p.second;

                t1->next = kReverse(h2,k);
				return h1;
}