#include<iostream>
#include<queue>
using namespace std;
class Node{
    public:
        int data;
        Node *left, *right;

        Node(int value){
            data=value;
            right=NULL;
            left=NULL;
        }
};

void RView(Node* root){      

    if(root==NULL)
        return;

    queue<Node*> obj; 
    obj.push(root);

    while(!obj.empty()){
        
        int n=obj.size();    //no. of nodes in current level
        for(int i=0;i<n;i++){
            Node* current=obj.front();
            obj.pop();
            if(i==n-1)
                cout<<current->data<<" ";      //printing last node value in queue
            if(current->left!=NULL)
                obj.push(current->left);

            if(current->right!=NULL)
                obj.push(current->right);
        
        }
        
    }
}



int main(){
    Node* root=new Node(1);       //                  1
    root->right=new Node(3);      //                 / \    /
    root->left=new Node(2);       //                2   3
    root->left->left=new Node(4); //               / \  / 
    root->left->right=new Node(5);//              4   5 6  
    root->right->left=new Node(6);//

    RView(root);
    return 0;
}

