#include<iostream>
#include<queue>
using namespace std;
class Node{
    public:
        int data;
        Node* left;
        Node* right;

        Node(int value){
            data=value;
            right=NULL;
            left=NULL;
        }
};

void levelorder(Node* root){       //(Node* root) cause we traversing it by pointer 

    if(root==NULL)
        return;

    queue<Node*> obj;
    obj.push(root);
    obj.push(NULL);

    cout<<"Printing Element in order left->right from Level 0 onwards!\n";
    int level=1;
    while(!obj.empty()){
        Node* node=obj.front();
        obj.pop();          //so that front element in queue must be replaced
        if(node!=NULL){
            cout<<node->data<<" ";            //printing data orderly by levels
            if(node->left!=NULL)
                obj.push(node->left);
            if(node->right!=NULL)
                obj.push(node->right);
        }
        else if(!obj.empty()){
            obj.push(NULL);
            level++;
        }



    }

    cout<<"Levels in ur tree are: "<<level<<endl;
}



int main(){
    Node* root=new Node(1);
    root->right=new Node(3);
    root->left=new Node(2);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);

    levelorder(root);
    return 0;
}
