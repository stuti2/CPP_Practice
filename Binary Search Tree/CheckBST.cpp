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

bool isBST(Node* root, Node* min, Node* max){
    if(root==NULL)
        return true;
    if(min!=NULL && root->data<=min->data)
        return false;
    if(max!=NULL && root->data>=max->data)
        return false;
    bool leftvalid=isBST(root->left,min,root);
    bool rightvalid=isBST(root->right,root,max);
    return leftvalid && rightvalid;
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
    if(isBST(root,NULL,NULL))
        cout<<"Is BST"<<endl;
    else    
        cout<<"Not BST"<<endl;
}