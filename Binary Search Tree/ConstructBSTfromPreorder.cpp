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

Node* constructBST(int preorder[],int *preorderIdx,int key,int min,int max,int n){
    if(*preorderIdx>=n)
        return NULL;
    Node* root=NULL;
    if(key>min && key<max){
        root=new Node(key);
        *preorderIdx=*preorderIdx + 1;
        if(*preorderIdx<n)
            root->left=constructBST(preorder,preorderIdx,preorder[*preorderIdx],min,key,n);
        if(*preorderIdx<n)
            root->right=constructBST(preorder,preorderIdx,preorder[*preorderIdx],key,max,n);
    }
    return root;
}

void printPreorder(Node* root){
    if(root==NULL)
        return;
    cout<<root->data<<" ";
    printPreorder(root->left);
    printPreorder(root->right);
}

int main() {
    readFile();
    FASTIO;
    int preorder[]={10,2,1,13,11};
    int preorderIdx=0;
    Node* root=constructBST(preorder,&preorderIdx,preorder[0],INT_MIN,INT_MAX,5);
    printPreorder(root);
}