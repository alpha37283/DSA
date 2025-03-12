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
        
        ListNode* dummyNode = new ListNode(0);
        ListNode* current = dummyNode;

        int carry = 0;

        while(l1 != NULL || l2 != NULL || carry != 0)
        {
            int sum = carry; // sum = 0
            if(l1 != NULL)
            {
                sum += l1->val; // sum = 3 
                l1 = l1->next; 
            }

            if(l2 != NULL)
            {
                sum += l2->val;
                l2 = l2->next; // sum = 4
            }

            carry = sum / 10; // 0

        
            ListNode* addNode = new ListNode(sum % 10);

            current->next = addNode;
            current = current->next;
        }

        return dummyNode->next; 
    }
};
