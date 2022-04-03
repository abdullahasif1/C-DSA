#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node *left, *right;
        Node(int val){
            data=val;
            left=right=NULL;
        }
};

Node* lca(Node* root,int n1,int n2){
    if(root==NULL)
        return NULL;

    if(root->data==n1 || root->data==n2)                     
        return root;

    Node* left=lca(root->left,n1,n2);                   //return Null or root-data==n1\n2
    Node* right=lca(root->right,n1,n2);

    if(left==NULL)               //if left subtree doesnot have any node so right subtree have both or none
        return right;

    if(right==NULL)             //same if right subtree doesnt have ...
        return left;

    return root;

}
int main(){
/*                      1
 *                    /   \
 *                   2     3
 *                  / \                  /
 *                 4   5
                  /
                 6
*/              


Node* root=new Node(1);
root->left=new Node(2);
root->right=new Node(3);
root->left->left=new Node(4);
root->left->right=new Node(5);
root->left->left->left=new Node(6);

Node* result=lca(root,6,5);    //2

cout<<result->data<<"\n";


    return 0;
}
