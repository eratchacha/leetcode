struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    struct ListNode *answer;
    struct ListNode *head;
    struct ListNode *newNode;  
    int raise = 0;
    
    answer = malloc(sizeof(struct ListNode));
    head = answer;
    
    while (l1 != 0 || l2 != 0)
    {
        if (l1 == 0)
        {
            answer -> val = (l2 -> val + raise) % 10;
            raise = (l2 -> val + raise) / 10;
            l2 = l2 -> next;
        }
        else if (l2 == 0)
        {
            answer -> val = (l1 -> val + raise) % 10;
            raise = (l1 -> val + raise) / 10;
            l1 = l1 -> next;
        }
        else
        {
            answer -> val = (l1 -> val + l2 -> val + raise) % 10;
            raise = (l1 -> val + l2 -> val + raise) / 10;
            l1 = l1 -> next;
            l2 = l2 -> next;
         }
        
        if (l1 == 0 && l2 == 0)
        {
            answer -> next = 0;
            break;
        }
        newNode = malloc(sizeof(struct ListNode));
        answer -> next = newNode;
        answer = answer -> next;
    }
    if (raise != 0)
    {
        newNode = malloc(sizeof(struct ListNode));
        newNode -> val = raise;
        newNode -> next = 0;
        answer -> next = newNode;
    } 
    
    return head;
}