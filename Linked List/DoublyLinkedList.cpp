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
    int data;
    node* next;
    node* prev;

    //Constructor
    node(int val) {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

void deleteHead(node* &head) {
    node* toDelete = head;
    head = head->next;
    head->prev = NULL;
    delete toDelete;  
}

void deleteNode(node* &head, int pos) {
    node* temp = head;
    int count = 1;
    if(pos==1) {
        deleteHead(head);
        return;
    }
    while(temp!=NULL && count!=pos) {
        temp = temp->next;
        count++;
    }
    temp->next->prev = temp->prev;
    temp->prev->next = temp->next;
    delete temp;
}

void insertAtHead(node* &head, int val) {
    node* n = new node(val); 
    n->next = head;
    if(head != NULL)
        head->prev = n;
    head = n;
}

void insertAtTail(node* &head, int val) {
    node* n = new node(val);
    if(head == NULL) {
        insertAtHead(head, val);
        return;
    }
    node* temp = head;
    while(temp->next!=NULL) {
        temp = temp->next;
    }
    temp->next = n;
    n->prev = temp;
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
    readFile();
    FASTIO;
    node* head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtTail(head,6);
    display(head);
    
    deleteNode(head,1);
    display(head);
    return 0;
}