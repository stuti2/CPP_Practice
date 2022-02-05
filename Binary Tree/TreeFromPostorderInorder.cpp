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

int search(int inorder[],int start,int end,int curr){
    f(i,start,end+1){
        if(inorder[i]==curr)
            return i;
    }
    return -1;
}

Node* buildTree(int postorder[],int inorder[],int start, int end){
    if(start>end)
        return NULL;
    
    static int idx=4;
    int curr=postorder[idx--];
    Node* node=new Node(curr);
    if(start==end)
        return node;        
    int pos=search(inorder,start,end,curr);    
    node->right=buildTree(postorder,inorder,pos+1,end);
    node->left=buildTree(postorder,inorder,start,pos-1);
}

void printInorder(Node* root){
    if(root==NULL)
        return;
        
    
    printInorder(root->left);    
    cout<<root->data<<" ";
    printInorder(root->right);
}

int main() {
    readFile();
    FASTIO;
    int postorder[]={4,2,5,3,1};
    int inorder[]={4,2,1,5,3};
    Node* root=buildTree(postorder,inorder,0,4);
    printInorder(root);
}
