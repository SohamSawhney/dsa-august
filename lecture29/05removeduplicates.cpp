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

ListNode*removeDuplicates(ListNode* head){
    ListNode*prev=head;
    ListNode*curr=head->next;
    while(curr!=NULL){
      if(curr->val==prev->val){
        //skip curr node;
        curr=curr->next;
      }
      else{
        //track curr node 
        prev->next=curr;
        prev=curr;
        curr=curr->next;
      }
    }
    prev->next=NULL;
    return head;
}
int main(){
   ListNode*head=NULL;
   insertatHead(head,50);
    insertatHead(head,40);
     insertatHead(head,30);
  insertatHead(head,20);
    insertatHead(head,10);



  	head = removeDuplicates(head);

   printLinkedList(head);
    return 0;
}