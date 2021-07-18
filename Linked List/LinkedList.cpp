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
	return 0;
}