#include <bits/stdc++.h>
using namespace std;
#define f(i, a, b)  for (int i=a; i<=b; i++)
#define fp(i, a, b) for (long long int i=a; i>=b; i--)
#define TC(t)       while (t--)
#define FASTIO      ios_base::sync_with_stdio(false);cin.tie(NULL)

void readFile() {
    #ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
    #endif
}

class node{
    public:
    node* next;
    int data;

    //constructor
    node(int val) {
        data = val;
        next = NULL;
    }
};

node* reverse(node* &head) {
    node* prevPtr = NULL;
    node* currPtr = head;
    node* nextPtr;
    while(currPtr!=NULL) {
        nextPtr = currPtr->next;
        currPtr->next = prevPtr;

        prevPtr=currPtr;
        currPtr=nextPtr;
    }
    return prevPtr;
}

node* reverseRecursive(node* &head) {
    if(head==NULL || head->next==NULL) {
        return head;
    }
    node* newHead = reverseRecursive(head->next);
    head->next->next = head;
    head->next = NULL;
    return newHead;
}

void insertAtTail(node* &head, int val) {
    node* n = new node(val);
    node* temp = head;
    if(head == NULL) {
        head = n;
        return;
    }
    while(temp->next !=NULL) {
        temp = temp->next;
    }
    temp->next = n;
}

void display(node* head) {
    node* temp = head;
    while(temp) {
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

int main() {
	// your code goes here
	readFile();
	FASTIO;
    node* head=NULL; 
    
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    display(head);
    
    // node* newHead = reverse(head);
    node* newHead = reverseRecursive(head);
    display(newHead);
	return 0;
}