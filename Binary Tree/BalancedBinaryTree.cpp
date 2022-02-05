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

bool isBalanced(Node* root,int* height){
    if(root==NULL)
        return true;
    int lh=0,rh=0;
    if(!isBalanced(root->left,&lh))
        return false;
    if(!isBalanced(root->right,&rh))
        return false;
    
    *height=max(rh,lh)+1;
    if(abs(lh-rh)<=1)
        return true;
    return false;
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

    /*
             1
           /   \
          2     3
         /    
        4
         \
          5 
    */
    struct Node* root2=new Node(1);
    root2->left=new Node(2);
    root2->right=new Node(3);
    root2->left->left=new Node(4);
    root2->left->left->right=new Node(5);

    int h=0;
    cout<<isBalanced(root,&h)<<endl;
    cout<<isBalanced(root2,&h)<<endl;
}