#include<bits/stdc++.h>
using namespace std;

class ListNode{
    public:
    int val;
    ListNode *next;
    ListNode(int data){
        val=data;
        next=NULL;
    }
};

class Solution{
    public:
     int rrll(ListNode *head){
        vector<int>ans;
        ListNode *temp;
        while(temp != NULL){
            ans.push_back(temp->value);
            temp=temp->next;
        };
        int i=ans.size()-1;
        temp=head;
        while(temp != NULL){
            temp[val] =ans[i];
            i--;
            temp=temp->next;
        }
        return head;
     }
};
