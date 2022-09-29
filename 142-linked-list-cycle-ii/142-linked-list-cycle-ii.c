/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode *detectCycle(struct ListNode *head) {
    struct ListNode *ptr = head;
    struct ListNode *ptrs[10000];
    ptrs[0] = head;
    int i = 1;
    int j = 0;
    
    while (ptr != 0)
    {
        ptrs[i] = ptr -> next;
        while (j < i)
        {
            if (ptrs[i] == ptrs[j])
                return ptr -> next;
            j++;
        }
        j = 0;
        i++;
        ptr = ptr -> next;
    }
    return 0;
}