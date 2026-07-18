#include<iostream>
using namespace std;

//time o(n)
//space :0(1)

class ListNode{
    public:
    int val;
    ListNode *next;
    ListNode(int val){
        this->val=val;
        this->next=NULL;
    }
};
int findlength(ListNode* head){
    int cnt=0;
    while(head!=NULL){
        head=head->next;
        cnt++;
    }
    return cnt;
}
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
int main(){
   ListNode*head=NULL;
   insertatHead(head,50);
    insertatHead(head,40);
     insertatHead(head,30);
  insertatHead(head,20);
    insertatHead(head,10);




   printLinkedList(head);
   findlength(head);
    return 0;
}