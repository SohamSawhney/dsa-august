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

void printLinkedList(ListNode* head){
    while(head!=NULL){
        cout<<head->val<<" ";
        head=head->next;
    }
}
void deleteAtHead(ListNode*& head){
    if(head==NULL){
        return ;

    }
    ListNode*temp=head;
    head=head->next;
    delete temp;
}
int main(){
   ListNode*head=NULL;
   insertatHead(head,50);
    insertatHead(head,40);
     insertatHead(head,30);
  insertatHead(head,20);
    insertatHead(head,10);




   printLinkedList(head);   //10 20 30 40 50




   deleteAtHead(head);
   printLinkedList(head);    //20 30 40  50
    return 0;
}