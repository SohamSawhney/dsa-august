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
ListNode* reverseIterative(ListNode* head){
    ListNode*cur=head;
    ListNode*prev=NULL;


    ListNode*cur=head;
    ListNode*prev=NULL;

    while(cur!=NULL){
        ListNode*temp=cur->next;
        cur->next=prev;
        prev=cur;
        cur=temp;

    }
    return prev;
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

    reverseIterative(head);




   printLinkedList(head);
    return 0;
}