/**
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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        ListNode* dummy = new ListNode(-1);
        ListNode* temp = dummy;
        
        while(list1 != nullptr && list2 != nullptr)
        {
            if(list1 -> val >= list2 -> val)
            {
                temp -> next = list2;
                list2 = list2 -> next;
            }    
            else{
                temp -> next = list1;
                list1 = list1 -> next;
            }
            temp = temp->next;
        }

        if(list1 != nullptr)
        temp -> next = list1;
        
        else
        temp -> next = list2;

        return dummy -> next;
    }
    
};