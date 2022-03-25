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

void FindSumAtReqLev(Node* root, int reqLev){        

    if(root==NULL)
        return;

    queue<Node*> obj;
    obj.push(root);
    obj.push(NULL);

       int reqSum=0;
       int level=0;
       if(reqLev==0){
          cout<<root<<endl;
          return;
       }
    while(!obj.empty()){
        Node* node=obj.front();
        obj.pop();          
        if(node!=NULL){
            if(reqLev==level){         //calculating sum while traversing queue
                 reqSum=reqSum+ node->data;
            }      
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

    cout<<"Sum of Node at Required Level in ur tree is: "<<reqSum<<endl;
}



int main(){
    Node* root=new Node(1);
    root->right=new Node(3);
    root->left=new Node(2);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);

    int reqLev=0;
    cout<<"Enter the level at which you want to count sum of:";
    cin>>reqLev;
    FindSumAtReqLev(root,reqLev);
    return 0;
}

