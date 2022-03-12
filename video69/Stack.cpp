#include<iostream>
using namespace std;

class stack{
    int* arr;
    int top;                   //indexing pointer
    public:
    stack(){
        arr=new int[100];
        top=-1;                //if top is at index -1 means its empty
    }

    void push(int x){
        if(top==99){
            cout<<"Stack is full, can't add more!"<<endl;
            return;
        }
        top++;
        arr[top]=x;
    }
    void Top(){
        if(top==-1){
            cout<<"No element in Stack\n";
            return;
        }
        cout<<arr[top]<<" is on the top!"<<endl;
    }
    void pop(){
        if(top==-1){
            cout<<"No element in Stack to pop!\n";
            return;
        }
        cout<<"Element "<<arr[top]<<" is popped!\n";
        top--;       //we assume if we come to previous next is lost     
    }
    void empty(){
        if(top==-1)
            cout<<"Stack is Empty!\n";
        else
            cout<<"Not empty!\n";
    }
};
int main(){

    stack a;
    a.push(1);
    a.push(2);
    a.push(3);
    a.push(4);
    a.push(5);
    a.Top();
    a.pop();
    a.Top();
    a.pop();
    a.pop();
    a.empty();
    a.pop();
    a.pop();
    a.empty();
    a.pop();
    return 0;
}
