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
        ListNode *dum1 = headA;
        ListNode *dum2 = headB;
        while(dum1 != dum2)
        {
            if(dum1 == NULL)
            {
                dum1 = headB;
            }

            else
            dum1 = dum1 -> next;


            if(dum2 == NULL)
            {
                dum2 = headA;
            }

            else
            dum2 = dum2 -> next;
        }
        return dum1; // iss point tak dono match kr jayenge!!
    }
};