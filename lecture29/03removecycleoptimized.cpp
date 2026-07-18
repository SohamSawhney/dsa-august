#include<iostream>
#include<set>
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

void removeCycle(ListNode* head){
    ListNode*slow=head;
    ListNode*fast=head;
    while(fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;
         if(slow==fast){
            break;
            // wea re at meeting point
         }
    }

    ListNode* prev=head;  // move prev pne-step behind meeting point
    while(prev->next!=fast){
        prev=prev->next;
    }

    slow=head;   // move slow to head and then move slow, prev, fast at the same speed till slow and fast meet
    while(slow!=fast){
        slow=slow->next;
        prev=prev->next;
        fast=fast->next;
    }
    //at this point slow and fast are at  start of the cycle
    // and prev is at tail 

    prev->next=NULL;

}

int main(){

  ListNode*head=new ListNode(10);
   head->next=new ListNode(10);
   head->next->next=new ListNode(20);
     head->next->next->next=new ListNode(30);
       head->next->next->next->next=new ListNode(40);
            head->next->next->next->next->next=new ListNode(50);
                  head->next->next->next->next->next=new ListNode(60);

                  head->next->next->next->next->next->next = head->next;

	removeCycle(head);

	printLinkedList(head);




}