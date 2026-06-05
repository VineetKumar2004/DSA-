class Solution{
    public:
    ListNode *merge(ListNode *head){
        ListNode *head=new ListNode(0);
        ListNode *tail=head;

        while(h1 && h2){
            if(h1->val <= h2->val){
                tail->next=h1;
                h1=h1->next;
                tail=tail->next;
                tail->next=NULL;
            }
            else{
                tail->next=h2;
                h2=h2->next;
                tail=tail->next;
                tail->next=NULL;
            }
            if(h1) tail->next=h1;
            else tail->next=h2;

            tail=head;
            head=head->next;
            delete tail;
            return head;
        }
    }
}