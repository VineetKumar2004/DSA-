#include<bits/stdc++.h>
using namespace std;

// class Node{
//     public:
//     int data;
//     Node *prev;
//     Node *next;
    
//     Node (int value){
//         data = value;
//         prev=NULL;
//         next=NULL;
//     }
// };

// int main(){
//     Node *head=NULL;

//     //ll doesnot exist
//     if(head == NULL){
//        head=new Node(5);
//     }
//     //ll exist
//     else{
//         Node *temp=new Node(5);
//         temp->next=head;
//         head->prev=temp;
//         head=temp;
//     }
//     Node *trav=head;
//     while(trav){
//         cout<<trav->data;
//         trav=trav->next;
//     }
// }

class Node{
    int data;
    Node *prev;
    Node *next;

    Node(int value){
        data=value;
        prev=NULL;
        next=NULL;
    }
};

int main(){
    Node *head=NULL;
    Node *curr=head;

    if(head == NULL){
        head=new Node(5);
    }

    while(curr->next != NULL){
        curr=curr->next;
    }
    Node *temp=new Node(5);
    curr->next=temp;
    temp->prev=curr;
}