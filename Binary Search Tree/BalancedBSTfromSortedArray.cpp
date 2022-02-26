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

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

Node* balancedBst(int arr[],int start,int end){
    if(start>end)
        return NULL;
    int mid=(start+end)/2;
    Node* root=new Node(arr[mid]);
    root->left=balancedBst(arr,start,mid-1);
    root->right=balancedBst(arr,mid+1,end);
    return root;
}

void preorder(Node* root){
    if(root==NULL)
        return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

int main() {
    readFile();
    FASTIO;
    int arr[]={10,20,30,40,50};
    Node* root=balancedBst(arr,0,4);
    preorder(root);
    cout<<endl;
}