// Palindrome Linked List

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
    bool isPalindrome(ListNode* head) {
        

    //Write your code here
	vector<int> a;
	vector<int> b;
	ListNode*temp=head;
	while(temp!=NULL)
	{
		a.push_back(temp->val);
		temp=temp->next;
	}
	
	ListNode*current=head;
	ListNode*prev=NULL;
	while(current!=NULL)
	{
		ListNode*a=current;
		ListNode*b=current->next;

		current ->next=prev;
		// cout<<current->val;
		prev=a;
		current=b;
	}


head=prev;
ListNode*t=head;
while(t!=NULL)
{
	b.push_back(t->val);
	t=t->next;

}



	for(int i=0;i<a.size();i++)
	{
if(a[i]!=b[i])
return false;
	}
	return true;
}
};