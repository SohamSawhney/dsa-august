#include<iostream>
using namespace std;
class ListNode{
    public:
    int val;
    ListNode *next;
    ListNode(int val){
        this->val=val;
        this->next=NULL;
    }
};
void insertatHead(ListNode*& head,int val){
    ListNode*n=new ListNode(val);
    n->next=head;
    head=n;
}
void deleteAtHead(ListNode*& head){
    if(head==NULL){
        return ;

    }
    ListNode*temp=head;
    head=head->next;
    delete temp;
}

void deletetail(ListNode*&head){


    if(head==NULL){
        return;
    }
    if(head->next==NULL){
        deleteAtHead(head);
    }
   ListNode* prev=NULL;
   ListNode* curr=head;
   while(curr->next!=NULL){
    prev=curr;
    curr=curr->next;
}
prev->next=NULL;
delete curr;
}



void printLinkedList(ListNode* head){
    while(head!=NULL){
        cout<<head->val<<" ";
        head=head->next;
    }
}
int main(){
   ListNode*head=NULL;
   insertatHead(head,50);
    insertatHead(head,40);
     insertatHead(head,30);
  insertatHead(head,20);
    insertatHead(head,10);




   printLinkedList(head);


   deletetail(head);
    printLinkedList(head);
    return 0;
}