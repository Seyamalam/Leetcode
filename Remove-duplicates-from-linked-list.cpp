class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *current = head;
        if(current == NULL || current->next == NULL)
                return current; 
        
        while(current!= NULL)
        {
            while(current->next != NULL && current->val == current->next->val)
            {
                ListNode *next = current->next->next;
                delete(current->next);
                current->next = next;
            }
            current = current->next;
        }
        
        return head; 
    }
};