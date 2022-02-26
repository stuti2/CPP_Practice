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

bool symmetric(Node* root1, Node* root2){
    if(root1 && root2)
        return root1->data==root2->data && symmetric(root1->left,root2->right) 
               && symmetric(root1->right,root2->left);
    return root1==NULL && root2==NULL;
}

bool isSymmetric(Node* root){
    if(root==NULL)
        return false;
    return symmetric(root->left,root->right);
}


int main() {
    readFile();
    FASTIO;
    /*
              4
           /  |  \
          2   |   2
         / \  |  / \
        1   3 | 3   1
              |
    */
    struct Node* root=new Node(4);
    root->left=new Node(2);
    root->right=new Node(2);
    root->left->left=new Node(1);
    root->left->right=new Node(3);
    root->right->left=new Node(3);
    root->right->right=new Node(1);
    cout<<isSymmetric(root)<<endl;
}