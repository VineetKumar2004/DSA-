class Solution{
    public:
     bool detect(ListNode *head){
         ListNode *fast=head;
         ListNode *slow=head;

         while(fast != NULL && fast->next != NULL){
            slow=slow->next;
            fast= fast->next->next;
            if(slow == fast) return 1;
         }
         return 0;
     }
}