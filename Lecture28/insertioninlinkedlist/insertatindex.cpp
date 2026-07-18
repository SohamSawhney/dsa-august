#include<iostream>
using namespace std;

class ListNode{
public:
    int val;
    ListNode *next;
    ListNode(int val){
        this->val = val;
        this->next = NULL;
    }
};

void insertatHead(ListNode*& head, int val){
    ListNode* n = new ListNode(val);
    n->next = head;
    head = n;
}

void printLinkedList(ListNode* head){
    while(head != NULL){
        cout << head->val << " ";
        head = head->next;
    }
}

ListNode* getNode(ListNode* head, int j){
    int k = 0;
    while(head != NULL && k < j){
        head = head->next;
        k++;
    }
    return head;
}

void insertAtIndex(ListNode*& head, int i, int val){
    if(i == 0){
        insertatHead(head, val);
        return;
    }

    ListNode* prev = getNode(head, i-1);

    if(prev == NULL){
        return;   // index out of bounds
    }

    ListNode* n = new ListNode(val);
    n->next = prev->next;
    prev->next = n;
}

int main(){
    ListNode* head = NULL;

    insertatHead(head,50);
    insertatHead(head,40);
    insertatHead(head,30);
    insertatHead(head,20);
    insertatHead(head,10);

    printLinkedList(head);
    cout << endl;

    insertAtIndex(head,2,25);

    printLinkedList(head);
    return 0;
}
