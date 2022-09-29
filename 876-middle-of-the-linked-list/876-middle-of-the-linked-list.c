/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* middleNode(struct ListNode* head){
    struct ListNode *ptr = head;
    int len = 0;
    int i = 0;
    
    while (ptr != 0)
    {
        len++;
        ptr = ptr -> next;
    }
    
    while (i < len / 2)
    {
        head = head -> next;
        i++;
    }
    
    return head;
}