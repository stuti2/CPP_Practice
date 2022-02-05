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

// int height(Node* root){
//     if(root==NULL){
//         return 0;
//     }
//     return max(height(root->left),height(root->right))+1;
// }

// int diameter(Node* root){
//     if(root==NULL)
//         return 0;
//     int lh=height(root->left);
//     int rh=height(root->right);
//     int currDiameter=lh+rh+1;

//     int ld=diameter(root->left);
//     int rd=diameter(root->right);
//     return max(currDiameter,max(ld,rd));
// }

int diameter(Node* root,int *height){
    if(root==NULL){
        *height=0;
        return 0;
    }
    int lh=0,rh=0;
    int ld=diameter(root->left,&lh);
    int rd=diameter(root->right,&rh);
    int currDiameter=lh+rh+1;
    *height=max(lh,rh)+1;
    return max(currDiameter,max(ld,rd));
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

    int height=0;
    cout<<diameter(root,&height)<<endl;
}