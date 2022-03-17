#include<iostream>
#include<queue>
using namespace std;

class stack{
    
    queue<int> q1;
    queue<int> q2;
    int size=0;
    public:

    void push(int x){
        size++;
        q1.push(x);
        while(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
        }
        q2=q1;
        while(!q1.empty()){  //O(N)          //queue<int> temp=q2;     O(1)
            q1.pop();                        //           q2=q1;
        }                                    //           q1=temp;
    }

    void pop(){
        if(q2.empty()){
            cout<<"Can't pop, Stack is empty!\n";
            return;
        }
        q2.pop();
        size--;
    }

    int top(){
        if(q2.empty()){
            cout<<"Nothing in Stack!(-1)";
            return-1;
        }
        return q2.front();
    }

    void empty(){
        if(q2.empty()){
            cout<<"Stack is empty!\n";
            return;
        }

        cout<<"Not Empty!\n";
    }

    int sizeofStack(){
        return size;
    }
};

int main(){
    stack s;
    s.push(1);
    s.push(2);

    cout<<"s.top(): "<<s.top()<<endl;
    cout<<"s.empty()!: ";
    s.empty();
    cout<<"s.sizeofStack(): "<<s.sizeofStack()<<endl;
    cout<<"s.pop()!\n";
    s.pop();
    cout<<"s.top(): "<<s.top()<<endl;
    cout<<"s.pop()!\n";
    s.pop();

    cout<<"s.sizeofStack(): "<<s.sizeofStack()<<endl;
    cout<<"s.empty()!: ";
    s.empty();
    cout<<"s.top(): "<<s.top()<<endl;
    cout<<"s.pop()! : ";
    s.pop();

    return 0;
}
