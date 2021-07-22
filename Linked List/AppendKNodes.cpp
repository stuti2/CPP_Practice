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

int length(node* head) {
    node* temp = head;
    int count = 1;
    while(temp->next!=NULL) {
        count++;
        temp  =temp->next;
    }
    return count;
}

node* appendK(node* &head, int k) {
    node* newTail;
    node* newHead;
    node* temp = head;
    int l = length(head);
    int count = 1;
    k = k%l;
    while(temp->next!=NULL) {
        if(l-k == count) {
            newTail = temp;
        }
        if(l-k+1 == count) {
            newHead = temp;
        }
        temp = temp->next;
        count++;
    }
    newTail->next = NULL;
    temp->next = head;
    return newHead;
}

void insertAtTail(node* &head, int val) {
    node* n = new node(val);
    if(head == NULL) {
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
    readFile();
    FASTIO;
    node* head = NULL;
    int arr[6]={1,2,3,4,5,6};
    f(i,0,6){
        insertAtTail(head,arr[i]);
    }
    display(head);
    int k;
    cin>>k;
    node* newhead = appendK(head,k);
    display(newhead);
}