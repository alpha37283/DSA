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
        if(headA == NULL || headB == NULL)
        {
            return  NULL;
        }


        ListNode *pointerA = headA; 
        ListNode *pointerB = headB; 

        while(pointerA != pointerB)
        {
            if(pointerA == NULL)
            {
                pointerA = headB;
            }
            else 
            {
                pointerA = pointerA->next;
            }

            if(pointerB == NULL)
            {
                pointerB = headA;
            }
            else 
            {
                pointerB = pointerB->next;
            }
        }

        return pointerA; 
    }
};

/*

start at pointer A and pointer B
if pointer A is NULL, set it to headB
if pointer B is NULL, set it to headA
continue until pointer A and pointer B meet

*/