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

void insertAtTail(node* &head,int val){
    node* n=new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp=head;
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

node* mergeList(node* head1,node* head2){
    node* ptr1=head1;
    node* ptr2=head2;
    node* dummy=new node(-1);
    node* ptr3=dummy;
    while(ptr1 && ptr2){
        if(ptr1->data<ptr2->data){
            ptr3->next=ptr1;
            ptr1=ptr1->next;
        }
        else{
            ptr3->next=ptr2;
            ptr2=ptr2->next;
        }       
        ptr3=ptr3->next;
    }
    while(ptr1){
        ptr3->next=ptr1;
        ptr1=ptr1->next;
        ptr3=ptr3->next;
    }
    while(ptr2){
        ptr3->next=ptr2;
        ptr2=ptr2->next;
        ptr3=ptr3->next;
    }
    return dummy->next;
}

int main() {
	readFile();
	FASTIO;
    node* head1=NULL;
    node* head2=NULL;
    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    input(a,n);
    input(b,m);
    f(i,0,n){
        insertAtTail(head1,a[i]);
    }
    display(head1);
    f(i,0,m){
        insertAtTail(head2,b[i]);
    }
    display(head2);
    node* newHead=mergeList(head1,head2);
    display(newHead);
    return 0;
}