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

int res=0;

void result(Node* root, int currMax, int currMin);
int maxAncestorDiff(Node* root) {    
    if(root==NULL)
        return 0;
    result(root,root->data,root->data);
    return res;
}

void result(Node* root, int currMax, int currMin){
    if(root==NULL)
        return;
    int pos = max(abs(root->data - currMax), abs(root->data - currMin));
    res = max(res,pos);
    currMax = max(root->data, currMax);
    currMin = min(root->data, currMin);
    result(root->left,currMax,currMin);
    result(root->right,currMax,currMin);
}

void preorder(struct Node* root){
    if(root==NULL)
        return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
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

   cout<<maxAncestorDiff(root)<<endl;

}