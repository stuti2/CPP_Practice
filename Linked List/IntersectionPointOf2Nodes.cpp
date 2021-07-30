#include <bits/stdc++.h>
using namespace std;
#define f(i, a, b)  for (int i=a; i<b; i++)
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

    //Constructor
    node(int val) {
        data = val;
        next = NULL;
    }
};

void insertAtTail(node* &head, int val) {
    node* n = new node(val);
    if(head==NULL){
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

void intersect(node* &head1, node* &head2, int pos) {
    node* ptr1 = head1;
    pos--;
    node* ptr2 = head2;
    while(pos--){
        ptr1 = ptr1->next;
    }

    while(ptr2->next!=NULL) {        
        ptr2 = ptr2->next;
    }
    ptr2->next = ptr1;
}

int length(node* head) {
    int l = 0;
    node* temp = head;
    while(temp->next!=NULL) {
        l++;
        temp = temp->next;
    }
    return l;
}

int intersectionPoint(node* head1, node* head2) {
    node* ptr1;
    node* ptr2;
    int l1 = length(head1);
    int l2 = length(head2);
    int diff = 0;
    if(l1>l2) {
        ptr1 = head1;
        ptr2 = head2;
        diff = l1-l2;
    }
    else {
        ptr1 = head2;
        ptr2 = head1;
        diff = l2-l1;
    }
    while(diff) {
        ptr1 = ptr1->next;
        if(ptr1==NULL)
            return -1;
        diff--;
    }
    while(ptr1!=NULL && ptr2!=NULL) {
        if(ptr1==ptr2)
            return ptr1->data;
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    return -1;
}

int main() {
    readFile();
    FASTIO;
    node* head1 = NULL;
    node* head2 = NULL;
    int arr[6]={1,2,3,4,5,6};
    f(i,0,6){
        insertAtTail(head1,arr[i]);
    }
    insertAtTail(head2,9);
    insertAtTail(head2,10);
    display(head1);
    display(head2);
    intersect(head1,head2,3);
    cout<<intersectionPoint(head1,head2)<<endl;
    return 0;
}