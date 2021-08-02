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

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node *start = NULL;

class Solution
{
    public:
    Node* segregate(Node *head) {
        if (!head || !(head->next))
            return head;
        Node* zeroD=new Node(0),* oneD=new Node(0),* twoD=new Node(0);
        Node* zero=zeroD,*one=oneD,*two=twoD;
        Node* curr=head;
        while(curr) {
            if(curr->data==0){
                zero->next=curr;
                zero=zero->next;
                curr=curr->next;
            }
            else if(curr->data==1){
                one->next=curr;
                one=one->next;
                curr=curr->next;
            }
            else {
                two->next=curr;
                two=two->next;
                curr=curr->next;
            }
        }
        zero->next=(oneD->next)?(oneD->next):(twoD->next);
        one->next=twoD->next;
        two->next=NULL;
        head=zeroD->next;
        delete zeroD,oneD,twoD;        
        return head;
    }
};


void printList(struct Node *Node) {
    while (Node != NULL) {
        cout<<Node->data<<" ";
        Node = Node->next;
    }
    cout<<endl;
}


void insert(int n1) {
    int n, value, i;
    n = n1;
    struct Node *temp;
    for (i = 0; i < n; i++) {
        cin>>value;

        if (i == 0) {
            start = new Node(value);
            temp = start;
            continue;
        } else {
            temp->next = new Node(value);
            temp = temp->next;
            temp->next = NULL;
        }
    }
}

int main() {
    readFile();
    FASTIO;
    int n;
    int t;
    cin>>t;
    TC(t) {
        cin>>n;
        insert(n);
        Solution ob;
        struct Node *newHead = ob.segregate(start);
        printList(newHead);
    }

    return 0;
}  