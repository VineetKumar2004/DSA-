#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node(int value){
        data=value;
        next=NULL;
    }
};
int main(){
    // Node *Head;
    // Head=new Node(4);
    // cout<<Head->data<<endl;
    // cout<<Head->next<<endl;

    // int arr[]={1,4,7,6,9};
    // for(int i=0;i<4;i++){
    //     if(Head == NULL){
    //         Head=new Node(arr[i]);
    //     }
    //     // LL EXISTS
    //     else{
    //         Node *temp;
    //         temp = new Node(arr[i]);
    //         temp->next=Head;
    //         Head=temp;
    //     }
    // }

    // //print the value
    // Node *temp=Head;
    // while(temp != NULL){
    //     cout<<temp->data<<" ";
    //     temp=temp->next;
    // }

   Node *Head, *Tail;
   Head=Tail=NULL;

   int arr[]={2,5,3,7,8};
   for(int i=0;i<5;i++){
    if(Head == NULL){
        Head=new Node(arr[i]);
        Tail = Head;
    }

    else{
        Tail->next=new Node(arr[i]);
        Tail=Tail->next;
    }
   }
   Node *temp;
   temp=Head;
   while(temp != NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
   }

}