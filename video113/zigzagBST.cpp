#include<iostream>
#include<stack>
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

//void cause we are only reading values
void zigzagBST(Node* root){

    if(root==NULL)          //base condition
        return;

    stack<Node*> curr;    //curr and next are pointers of LEVELS
    stack<Node*> next;    //<Node*> cause temp pick curr.top and traverse from it 

    bool righttoleft=true;      //push curr level's elements child from righttoleft

    curr.push(root);

    while(!curr.empty()){
        Node* temp=curr.top();    //temp stores the latest element which is
        curr.pop();               //being process at the moment
                                  //Process is whose child are being noted

        if(temp){
            cout<<temp->data<<" ";
            if(righttoleft){
                if(temp->left)
                    next.push(temp->left);
                if(temp->right)
                    next.push(temp->right);
            }

            else{
                if(temp->right)
                    next.push(temp->right);
                if(temp->left)
                    next.push(temp->left);
             }
        }
        
        if(curr.empty()){
            righttoleft=!righttoleft;
            swap(curr,next);
        }
    }
}
int main(){
    Node* root=new Node(15);
    root->left=new Node(8);
    root->right=new Node(21);
    root->left->right=new Node(12);
    root->left->left=new Node(1);
    root->right->left=new Node(16);
    /*   
     *                        15
     *                       / \
     *                      /   \
     *                     8     21
     *                    / \    /
     *                   1   12  16
     *
     *   */

    zigzagBST(root);
    cout<<"\n";
    return 0;
}
