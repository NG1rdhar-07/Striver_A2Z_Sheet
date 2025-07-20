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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *sample = new ListNode();
        ListNode *fnl = sample;
        int carry = 0;

        while(l1 != NULL || l2 != NULL || carry){
            int netSum = 0;

            if(l1 != NULL)
            {
                netSum += l1 -> val;
                l1 = l1 -> next; 
            }

            if(l2 != NULL)
            {
                netSum += l2 -> val;
                l2 = l2 -> next;
            }
            
            netSum += carry;
            carry = netSum/10;
            ListNode *node = new ListNode(netSum % 10); 
            fnl -> next = node; 
            fnl = fnl -> next;
        }
        return sample -> next;
    }
};