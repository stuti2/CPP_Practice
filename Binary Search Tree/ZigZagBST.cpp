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

void zigzag(Node* root){
    if(root==NULL)
        return;
    stack<Node*>currLevel;
    stack<Node*>nextLevel;
    bool leftToRight=true;
    currLevel.push(root);
    while(!currLevel.empty()){
        Node* temp=currLevel.top();
        currLevel.pop();
        if(temp){
            cout<<temp->data<<" ";
            if(leftToRight){
                if(temp->left)
                    nextLevel.push(temp->left);
                if(temp->right)
                    nextLevel.push(temp->right);
            }
            else{
                if(temp->right)
                    nextLevel.push(temp->right);  
                if(temp->left)
                    nextLevel.push(temp->left);              
            }
        }
        if(currLevel.empty()){
            leftToRight=!leftToRight;
            swap(currLevel,nextLevel);
        }
    }
}

void preorder(Node* root){
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
    preorder(root);
    cout<<endl;
    zigzag(root);
    cout<<endl;
}