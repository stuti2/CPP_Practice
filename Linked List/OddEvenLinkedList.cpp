#include <bits/stdc++.h>
using namespace std;
#define f(i, a, b)              for (int i=a; i<b; i++)
#define fp(i, a, b)             for (long long int i=a; i>=b; i--)
#define input(arr1,n1)          f(i,0,n1) {cin>>arr1[i];}
#define TC(t)                   while (t--)
#define FASTIO                  ios_base::sync_with_stdio(false);cin.tie(NULL)

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

    //constructor
    node(int val){
        data=val;
        next=NULL;
    }
};

void insertAtTail(node* &head, int val){    
    node* temp=head;
    node* n=new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    while(temp->next){
        temp=temp->next;
    }
    temp->next=n;
}

void display(node* head){
    node* temp=head;
    while(temp){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

node* oddEvenList(node* head) {
    if(head==NULL)
        return NULL;
    node* odd=head,*even=head->next,*evenList=even;
    while(even && even->next){
        odd->next=even->next;
        odd=odd->next;
        even->next=odd->next;
        even=even->next;
    }
    odd->next=evenList;
    return head;
}

int main() {
	readFile();
	FASTIO;
    node* head=NULL;
    int n;
    cin>>n;
    int a[n];
    input(a,n);
    f(i,0,n){
        insertAtTail(head,a[i]);
    }
    display(head);
    node* newHead=oddEvenList(head);
    display(newHead);
    return 0;
}