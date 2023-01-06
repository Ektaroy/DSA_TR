// Merge Two Sorted Lists

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* head1, ListNode* head2) {
        

    //Write your code here
	if(head1==NULL && head2==NULL)
	return head1;
else if(head1==NULL)
return head2;
else if(head2==NULL)
return head1;
    ListNode*h1=head1;
    ListNode*h2=head2;


	ListNode*fh=NULL;
	ListNode*ft=NULL;

while(h1!=NULL && h2!=NULL){

	if(fh==NULL)
	{
        if(h1->val<=h2->val)
		{
			fh=h1;
			ft=h1;
			h1=h1->next;
		}
		else{
			fh=h2;
			ft=h2;
			h2=h2->next;
		}
	}
else{
          if (h1->val > h2->val)
{
ft->next=h2;
ft = h2;

h2=h2->next;
}
else{
ft->next=h1;
ft=h1;
h1=h1->next;
} 
}



}


if(h1==NULL)
ft->next=h2;

if(h2==NULL)
ft->next=h1;
    return fh;
}
    };