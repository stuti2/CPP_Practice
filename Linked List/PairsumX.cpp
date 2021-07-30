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
    node* next;
    int data;

    //Constructor
    node(int val) {
        data = val;
        next = NULL;
    }
};

int countPairs(node* head1, node* head2, int x) {
    node* temp1 = head1;
    node* temp2 = head2;
    int count = 0;
    unordered_set <int> s;
    while(temp1) {
        s.insert(temp1->data);
        temp1 = temp1->next;
    }
    while(temp2) {
        if(s.find(x- temp2->data)!=s.end())
            count++;
        temp2 = temp2->next;
    }
    return count;
}

void insertAtTail(node* &head,int val) {
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
    readFile();
    FASTIO;
    node* head1 = NULL;
    node* head2 = NULL;
    int n1,n2,x;
    cin>>n1>>n2>>x;
    int arr1[n1],arr2[n2];
    input(arr1,n1);
    input(arr2,n2);
    f(i,0,n1){
        insertAtTail(head1,arr1[i]);
    }
    f(i,0,n2){
        insertAtTail(head2,arr2[i]);
    }
    display(head1);
    display(head2);

    cout<<countPairs(head1,head2,x)<<endl;
    return 0;
}