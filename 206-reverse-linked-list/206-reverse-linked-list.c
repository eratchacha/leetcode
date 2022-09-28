/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* reverseList(struct ListNode* head){
    struct ListNode *ind = head;
    struct ListNode *rev = malloc(sizeof(struct ListNode));
    struct ListNode *new;
    int len = 0;
    int *arr;
    int i = 0;
    
    if (head == 0)
        return 0;
    if (head -> next == 0)
        return head;
    
    while (ind != 0)
    {
        len++;
        ind = ind -> next;
    }
    
    arr = malloc(sizeof(int) * len);
    memset(arr,0,sizeof(arr));
    ind = head;
    
    while (ind != 0)
    {
        arr[i] = ind -> val; 
        i++;
        ind = ind -> next;
    }
    
    i = 0;
    ind = rev;
    
    while (i < len)
    {
        ind -> val = arr[len - 1 - i];
        
        if(i < len - 1)
        {
            new = malloc(sizeof(struct ListNode));
            ind -> next = new;
            ind = ind -> next;
        }
        
        i++;
    }
    ind -> next = 0;
    free(arr);
    return rev;
}