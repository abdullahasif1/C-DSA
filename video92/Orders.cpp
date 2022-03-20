#include<iostream>
using namespace std;
 
class node{
    public:
    char data;
    node* right;
    node* left;
    node(int x){
        data=x;
        right=NULL;
        left=NULL;
    }
};

void preorder(node* root){
    if(root==NULL)
        return;

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);

}

void inorder(node* root){
    if(root==NULL)
        return;

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);

}
void postorder(node* root){
    if(root==NULL)
        return;

    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
 
int main(){

    node* root= new node('a');
    root->left= new node('b');
    root->right= new node('c');

    root->left->left= new node('d');
    root->left->right= new node('e');

    root->right->left=new node('f');
    root->right->right=new node('g');

    cout<<"Printig Preorder: ";
    preorder(root);
    cout<<"\n";

    cout<<"Printing inorder: ";
    inorder(root);
    cout<<"\n";

    cout<<"Printing Postorder: ";
    postorder(root);
	cout<<"\n";
     /*         1
      *       /   \
      *      /     \
      *     2       3
      *    / \     / \
          4   5   6   7
     */
    return 0;
}
