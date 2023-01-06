// Reverse Linked List

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
    ListNode* reverseList(ListNode* head) {
ListNode*prev=NULL;
ListNode*curr=head;

while(curr!=NULL)
{
    ListNode*t1=curr;
    ListNode*t2=curr->next;
     

    curr->next=prev;
    prev=t1;
    curr=t2;


}
head=prev;
return head;
    }
};