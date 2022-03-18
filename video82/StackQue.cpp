#include<iostream>
#include<queue>
using namespace std;

class stack{
    queue<int> q1;
    queue<int> q2;
    int size=0;
    public:
    void push(int x){
        q1.push(x);  size++;
    }

    void pop(){
        if(size==0){
            cout<<"Nothing to pop!\n";
            return;
        }

        while(q1.size()!=1){             //queue built in function .size() gives the
            q2.push(q1.front());         //size of the queue container
            q1.pop();
        }

        q1.pop();
        size--;

        queue<int> temp=q1;    //why using this cause complexity of this is O(1)
        q1=q2;
        q2=temp;
    }

    int top(){
        if(size==0){
            cout<<"Nothing On top!(-1)\n";
            return -1;
        }
        while(q1.size()!=1){             
            q2.push(q1.front());      
            q1.pop();
        }
        int atfront=q1.front();
        q2.push(q1.front());       //q2.push(atfront);
        q1.pop();                  //this 1 line works same as of line 43 & 44 

        queue<int> temp=q1;
        q1=q2;
        q2=temp;

        return atfront;
    }

    int sizeofStack(){
        return size;
    }

    void empty(){
        if(q1.empty()){
            cout<<"Stack is Empty!\n";
            return;
        }
        cout<<"Stack is not Empty!\n";
    }

};

int main(){
    stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);


    cout<<"s.top: "<<s.top()<<endl;
    s.empty();
    s.pop();
    s.pop();
    cout<<"s.top: "<<s.top()<<endl;
    return 0;
}
