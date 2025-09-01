// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;


struct node {
    int data;
node*left;
node*right;
node(int val) {
    data = val;
    left = nullptr;
    right = nullptr;
}
};

void inorder(node*root) {
    if (root) {
        inorder(root -> left);
        cout << root->data << " ";
        inorder(root->right);
    }
}
    void preorder(node*root){
        if (root){
            cout << root->data << " ";
            preorder(root->left);
            preorder(root->right);
        
        }
    }
        void postorder(node*root) {
            if (root) {
                cout << root->data;
               preorder(root->left);
               preorder(root->right);
                
            }
        }
    

int main() {
    
    node*root = new node(10);
    root -> left = new node(5);
    root -> right = new node(9);
    
    root -> left -> left = new node(6);
    root -> right -> left = new node(3);
    root -> right -> right = new node(2);
    
    cout << "inorder:" << endl;
    inorder(root);
    
    cout << "preorder:" << endl;
    preorder(root);
    cout << "postorder:" << endl;
    postorder (root);
    // Write C++ code here
    //

    return 0;
}


output:
inorder:
6 5 10 3 9 2 
preorder:
10 5 6 9 3 2 
postorder:
105 6 9 3 2 
