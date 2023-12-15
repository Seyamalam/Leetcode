class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL || head->next == NULL)
            return head; 
        
        ListNode *current = head;
        while(current != NULL && current->next != NULL )
        {
            swap(current->val, current->next->val);
            current = current->next->next;
        }
        return head;
    }
};