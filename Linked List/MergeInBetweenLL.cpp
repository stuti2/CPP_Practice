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

node* mergeInBtw(node* &head1,int a,int b,node* &head2){
    node* temp=head1,*start,*end;
    int count=0;
    while(temp){
        if(count+1==a)
            start=temp;
        if(count==b)
            end=temp->next;
        temp=temp->next;
        count++;
    }
    start->next=head2;
    while(head2->next){
        head2=head2->next;
    }
    head2->next=end;
    return head1;
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
    int x,y;
    cin>>x>>y;
    f(i,0,n){
        insertAtTail(head1,a[i]);
    }
    display(head1);
    f(i,0,m){
        insertAtTail(head2,b[i]);
    }
    display(head2);
    node* newHead=mergeInBtw(head1,x,y,head2);
    display(newHead);
    return 0;
}