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

int maxPathSumUtil(Node* root, int &ans){
    if(root==NULL)
        return 0;
    int l=maxPathSumUtil(root->left,ans);
    int r=maxPathSumUtil(root->right,ans);
    int singlePath=max(max(l+root->data,r+root->data),root->data);
    int nodeMax=max(singlePath,l+r+root->data);
    ans=max(ans,nodeMax);
    return singlePath;
}

int maxPathSum(Node* root){
    int ans=INT_MIN;
    maxPathSumUtil(root,ans);
    return ans;
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
    cout<<maxPathSum(root)<<endl;
}