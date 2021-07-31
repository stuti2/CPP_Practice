#include <bits/stdc++.h>
using namespace std;
#define f(i, a, b)                for (int i=a; i<b; i++)
#define fp(i, a, b)               for (long long int i=a; i>=b; i--)
#define TC(t)                     while (t--)
#define input(arr1,n1)            f(i,0,n1) {cin>>arr1[i];}
#define FASTIO                    ios_base::sync_with_stdio(false);cin.tie(NULL)

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

node* rotate(node* &head) {
    node* temp = head;
    node* tail;
    while(temp) {
        node* next = temp->next;
        temp->next = temp->prev;
        temp->prev = next;
        if(temp->prev == NULL){
            break;
        }
        temp = temp->prev;
    }
    return temp;
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
    if(head==NULL){
        insertAtHead(head,val);
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
    int n;
    cin>>n;
    int a[n];
    input(a,n);
    f(i,0,n){
        insertAtTail(head,a[i]);
    }
    display(head);
    node* newHead = rotate(head);
    display(newHead);
}