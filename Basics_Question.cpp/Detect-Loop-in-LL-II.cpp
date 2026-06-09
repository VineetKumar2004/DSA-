class Solution{
    public:
     bool *detectLoop(ListNode *head){
        ListNode *slow=head;
        ListNode *fast=head;

        while(fast != NULL && fast->next != NULL){
            slow=slow->next;
            fast=fast->next;

            if(slow == fast){
                ListNode *temp=head;
                while(temp != slow){
                    temp=temp->next;
                    slow=slow->next;
                }
                return temp;
            }
        }
        return 0;
     }
}