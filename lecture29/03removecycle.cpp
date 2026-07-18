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

void removecycle(ListNode*head){
            if (head == NULL) return;

        set<ListNode*> visited;

        ListNode* curr = head;
        ListNode* prev = NULL;

        while (curr != NULL) {

            // ✅ Cycle detected
            if (visited.find(curr) != visited.end()) {
                prev->next = NULL;   // BREAK THE CYCLE
                cout << "Cycle removed successfully\n";
                return;
            }

            visited.insert(curr);
            prev = curr;
            curr = curr->next;
        }

        cout << "No cycle found\n";
    }


int main(){
   ListNode*head=NULL;
   head->next=new ListNode(10);
   head->next->next=new ListNode(20);
     head->next->next->next=new ListNode(30);
       head->next->next->next->next=new ListNode(40);
            head->next->next->next->next->next=new ListNode(50);
                  head->next->next->next->next->next=new ListNode(60);



}