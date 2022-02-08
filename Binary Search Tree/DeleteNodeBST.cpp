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

Node* inorderSucc(Node* root){
    Node* curr=root;
    while(curr && curr->left)
        curr=curr->left;
    return curr;
}

Node* deleteNode(Node* root,int val){
    if(root==NULL)
        return NULL;
    if(val<root->data)
        root->left=deleteNode(root->left,val);
    else if(val>root->data)
        root->right=deleteNode(root->right,val);
    else{
        if(root->left==NULL){
            Node* temp=root->right;
            free(root);
            return temp;
        }
        else if(root->right==NULL){
            Node* temp=root->left;
            free(root);
            return temp;
        }
        //case 3(val has 2 children)
        Node* temp=inorderSucc(root->right);
        root->data=temp->data;
        root->right=deleteNode(root->right,temp->data);
    }
    return root;
    
}

void inorder(Node* root){
    if(root==NULL)
        return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main() {
    readFile();
    FASTIO;
    /*
             4
           /   \
          2     5
         / \     \
        1   3     6
    */
    struct Node* root=new Node(4);
    root->left=new Node(2);
    root->right=new Node(5);
    root->left->left=new Node(1);
    root->left->right=new Node(3);
    root->right->right=new Node(6);
    inorder(root);
    cout<<endl;
    root=deleteNode(root,2);
    inorder(root);
    cout<<endl;
}