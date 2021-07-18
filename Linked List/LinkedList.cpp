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

class node {
    public:
    int data;
    node* next;

    //constructor
    node(int val) {
        data=val;
        next=NULL; 
    }
};

void insertAtHead(node* &head, int val) {
    node* n = new node(val);
    n->next = head;
    head = n;
}

void insertAtTail(node* &head, int val) {
    node* n = new node(val);
    if(head==NULL) {
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL) {
        temp=temp->next;
    }
    temp->next=n;
}

bool search(node* head, int key) {
    node* temp = head;
    while(temp!=NULL) {
        if(temp->data == key) {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

void display(node* head) {
    node* temp=head;
    while(temp!=NULL) {
        cout<<temp->data<<"->";
        temp=temp->next;
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
    display(head);

    insertAtHead(head,4);
    display(head);

    cout<<search(head,5)<<endl;
	return 0;
}
