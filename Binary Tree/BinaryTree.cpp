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

void preorder(struct Node* root){
    if(root==NULL)
        return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
} 

void inorder(struct Node* root){
    if(root==NULL)
        return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void postorder(struct Node* root){
    if(root==NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

int main() {
    readFile();
    FASTIO;
    /*
             1
           /   \
          2     3
         / \   / \
        4   5 6   7
    */
   struct Node* root=new Node(1);
   root->left=new Node(2);
   root->right=new Node(3);

   root->left->left=new Node(4);
   root->left->right=new Node(5);

   root->right->left=new Node(6);
   root->right->right=new Node(7);

   preorder(root);
   cout<<endl;
   inorder(root);
   cout<<endl;
   postorder(root);
}