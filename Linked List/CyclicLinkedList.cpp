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

void makeCyclic(node* head, int pos) {
    node* temp = head;
    node* startNode;
    int count = 1;
    while(temp->next!=NULL) {
        if(count == pos)
            startNode = temp;
        temp = temp->next;
        count++;
    }
    temp->next = startNode;
}

void removeCycle(node* head) {
    node* fast = head;
    node* slow = head;
    do {
        fast=fast->next->next;
        slow=slow->next;
    }while(fast!=slow);
    fast = head;
    while(fast->next != slow->next) {
        fast = fast->next;
        slow = slow->next;
    }
    slow->next = NULL;
}

bool detectCycle(node* head) {
    node* fast = head;
    node* slow = head;
    while(fast!=NULL && fast->next!=NULL) {
        fast = fast->next->next;
        slow = slow->next;
        if(fast==slow)
            return true;
    }
    return false;
}

void insertAtTail(node* &head, int val) {
    node* n = new node(val);  
    if(head==NULL) {
        head = n;
        return;
    }
    node* temp = head;
    while(temp->next!=NULL) {
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
    insertAtTail(head,5);
    insertAtTail(head,6);
    display(head);
    cout<<detectCycle(head)<<endl;
    makeCyclic(head,4);
    // display(head);
    cout<<detectCycle(head)<<endl;
    removeCycle(head);
    display(head);
    cout<<detectCycle(head)<<endl;
    return 0;
}