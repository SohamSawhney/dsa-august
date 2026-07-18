




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

ListNode* reverserecursive(ListNode* head){
    //base case 
    if(head==NULL){
        //linkedlist empty
        return head;
    }
    if(head->next==NULL){
        //linkedlist has exactly one node
        return head;
    }

    //recursive case 
    //linkedlist has >=2 nodes
    //1 ask your  friend to reverse the sublist that starts from the node which comes after the head node

    ListNode* headFromMyFriend=reverserecursive(head->next);
    head->next->next=head;
    head->next=NULL;



    return headFromMyFriend;
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
    return 0;
}