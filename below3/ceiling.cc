#include <iostream>
#include <cmath>
#include <set>
using namespace std;

// k distinct integers
// tags: simple BST easy BST Binary Search Tree

class Node{

public:
    int val;
    Node* left;
    Node* right;
    Node(int v){
        val = v;
        left = NULL;
        right = NULL;
    }

    Node* Insert(Node* root, int v){
        if(!root){
            return new Node(v);
        }else if (v < root->val)
        {
            root->left = Insert(root->left, v);
        }else{
            root->right = Insert(root->right, v);
        }
        return root;
        
    }
};

string draw(Node* root,string st){
    if(!root){
        return st;
    }
    st+="o";
    if(root->left){
        st+="l";
    }
    if(root->right){
        st+="r";
    }
    st = draw(root->left,st);
    st = draw(root->right,st);
    return st;
}

set<string> sz;

int main(){
    int n,k;
    cin>>n>>k;
    int ip;
    for (int i = 0; i < n; i++)
    {
        cin >> ip;
        Node* root = new Node(ip);
        for (int j = 1; j < k; j++)
        {
            cin>>ip;
            root->Insert(root,ip);
        }
        string res = "";
        res = draw(root,res);
        // cout<<res<<'\n';
        sz.insert(res);

    }
    cout<<sz.size();
    return 0;
}