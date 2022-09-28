/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){
    struct ListNode* head = malloc(sizeof(struct ListNode));
    struct ListNode* ind = head;
    struct ListNode* new;
    
    if (l1 == 0 && l2 == 0)
        return 0;
    
    while (l1 != 0 || l2 != 0)
    {
        if (l1 == 0)
        {
            ind -> val = l2 -> val;
            l2 = l2 -> next;
        }
        else if (l2 == 0)
        {
            ind -> val = l1 -> val;
            l1 = l1 -> next; 
        }
        else
        {
            if (l1 -> val >= l2 -> val)
            {
                ind -> val = l2 -> val;
                l2 = l2 -> next;
            }
            else
            {
                ind -> val = l1 -> val;
                l1 = l1 -> next;
            }
        }
        if (l1 == 0 && l2 == 0)
        {
            ind -> next = 0;
            break;
        }
        new = malloc(sizeof(struct ListNode));
        ind -> next = new;
        ind = ind -> next;
        
    }
    return head;
}