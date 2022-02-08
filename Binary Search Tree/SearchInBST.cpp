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

Node* search(Node* root,int val){
    if(root==NULL)
        return NULL;
    if(val>root->data)
        return search(root->right,val);
    else if(val<root->data)    
        return search(root->left,val);
    else    
        return root;
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
    if(search(root,4))
        cout<<"Found"<<endl;
    else    
        cout<<"Not Found"<<endl;
}