class Solution{
    public:
     ListNode *deleteElement(ListNode * head){
        ListNode *prev=head;
        ListNode *curr=head->next;

        while(curr){
            if(prev->val == curr->val){
                prev->next=curr->next;
                delete curr;
                curr=prev->next;
            }
            else {
                prev=prev->next;
                curr=curr->next;
            }
        }
        return head;
     }
};