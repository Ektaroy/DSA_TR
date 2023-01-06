// Intersection of Two Linked Lists

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode*x1=headA;
        ListNode*t1=headA;

        ListNode*x2=headB;
        ListNode*t2=headB;

        int s1=0;
        int s2=0;


        while(x1!=NULL)
        {
            x1=x1->next;
            s1++;
        }

        while(x2!=NULL){
            x2=x2->next;
            s2++;
        }

        if(s2>s1){

        
        for(int i=0;i<abs(s2-s1);i++)
        {
            t2=t2->next;
        }

        }
        else{
        for(int i=0;i<abs(s2-s1);i++)
{
    t1=t1->next;
}
        }


while(t2!=NULL && t1!=NULL)
{
if(t1==t2)
return t1;
t1=t1->next;
t2=t2->next;
}

return NULL;



    }
};