#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node *left,*right;      //can be written like this as well
        Node(int val){
            data=val;
            left=NULL;
            right=NULL;
        }
};

bool IdenticalBST(Node* root, Node* root1){
    if(root==NULL && root1==NULL)
        return true;

    if(root==NULL || root1==NULL)      //else if will save this line processing
        return false;

    else{
        bool equal= root->data==root1->data;
        bool cond1= IdenticalBST(root->left,root1->left);
        bool cond2= IdenticalBST(root->right,root1->right);

        if(equal,cond1,cond2)
            return true;
        else
            return false;
    }


}
int main(){

    Node* root=new Node(15);
    root->left=new Node(9);
    root->right=new Node(199);

    Node* root1=new Node(15);
    root->left=new Node(9);
    root->right=new Node(22);

    if(IdenticalBST(root,root1))
        cout<<"BSTrees are Identical!\n";
    else
        cout<<"BSTrees are not Identical!\n";




    return 0;
}
