// Merge Sort

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

Node *midpoint(Node *head) {
  // Write your code here
  Node *s = head;
  Node *f = head;
  while (f != NULL && f->next != NULL && f->next->next != NULL) {
    s = s->next;
    f = f->next->next;
  }
  return s;
}

Node *mergeTwoSortedLinkedLists(Node *head1, Node *head2) {
  // Write your code here
  if (head1 == NULL && head2 == NULL)
    return head1;
  else if (head1 == NULL)
    return head2;
  else if (head2 == NULL)
    return head1;
  Node *h1 = head1;
  Node *h2 = head2;

  Node *fh = NULL;
  Node *ft = NULL;

  while (h1 != NULL && h2 != NULL) {

    if (fh == NULL) {
      if (h1->data <= h2->data) {
        fh = h1;
        ft = h1;
        h1 = h1->next;
      } else {
        fh = h2;
        ft = h2;
        h2 = h2->next;
      }
    } else {
      if (h1->data > h2->data) {
        ft->next = h2;
        ft = h2;

        h2 = h2->next;
      } else {
        ft->next = h1;
        ft = h1;
        h1 = h1->next;
      }
    }
  }

  if (h1 == NULL)
    ft->next = h2;

  if (h2 == NULL)
    ft->next = h1;
  return fh;
}

Node *mergeSort(Node *head)
{
	//Write your code here
  if(head==NULL ||head->next==NULL)
  return head;

Node*mid=midpoint(head);
Node*b=mid->next;

Node*a=head;
mid->next = NULL;
// Node*a=head;
// Node*b=head->next;
// head->next=NULL;
  return mergeTwoSortedLinkedLists(mergeSort(a),mergeSort(b));
}