class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head == NULL)
            return head; 
        if(head->next == NULL)
            return head; 
        vector<int>temp;
        ListNode *current = head;
        while(current != NULL)
        {
            temp.push_back(current->val);
            current = current->next;
        }
        reverse(temp.begin(), temp.end());
        current = head;
        int i=0; 
        while(current!= NULL)
        {
            current->val = temp[i];
            i+=1;
            current = current->next; 
        }
        return head; 
    }
};