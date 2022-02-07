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

Node* LCA(Node* root, int n1, int n2){
    if(root==NULL)
        return NULL;
    if(root->data==n1 || root->data==n2)
        return root;
    Node* left=LCA(root->left, n1, n2);
    Node* right=LCA(root->right, n1, n2);
    if(left!=NULL && right!=NULL)
        return root;
    if(left==NULL && right==NULL)
        return NULL;
    if(left!=NULL)
        return LCA(root->left,n1,n2);
    return LCA(root->right,n1,n2);
}

int distance(Node* root, int k, int dist){
    if(root==NULL)
        return -1;
    
    if(root->data==k)
        return dist;
    int left=distance(root->left,k,dist+1);
    if(left!=-1)
        return left;
    return distance(root->right,k,dist+1);
}

int distBtwNodes(Node* root, int n1, int n2){
    Node* lca=LCA(root,n1,n2);
    int d1=distance(lca,n1,0);
    int d2=distance(lca,n2,0);
    return d1+d2;
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
    cout<<distBtwNodes(root,4,7)<<endl;
}