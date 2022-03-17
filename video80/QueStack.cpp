#include<iostream>
using namespace std;
#include<stack>
class queue{
    stack<int> s1;
    stack<int> s2;

    public:

    void enque(int val){
        s1.push(val);
    }
    void deque(){
        if(s1.empty() && s2.empty()){
            cout<<"Can't dequeue as Queue is Empty!\n";
            return;
        }
        if(s2.empty()){
            while(!s1.empty()){
                s2.push(s1.top());    //cant do s2.push(s1.pop()) cause built in pop 
                s1.pop();             //function only remove top element, doest return it
            }                         //whereas top() does return top element 
        }
        s2.pop();
    }

    int peek(){
        if(s1.empty() && s2.empty()){
            cout<<"Nothing at top cause Queue is Empty! So returning -1\n";
            return -1;
        }
        if(s2.empty()){
            while(!s1.empty()){
            s2.push(s1.top());    
            s1.pop();            
               }                         
           }
           return s2.top();
       }

    void empty(){
        if(s1.empty() && s2.empty()){
            cout<<"Queue is Empty!\n";
            return;
        }
        cout<<"Not Empty!\n";

    }
};

int main(){
    queue q;
    q.enque(1);
    q.enque(2);
    q.enque(3);
    q.enque(4);

    cout<<"Is at to: "<<q.peek()<<endl;

    q.deque();
    q.deque();
    cout<<"Is at to: "<<q.peek()<<endl;
    q.empty();

    q.deque();
    q.enque(5);
    cout<<"Is at top: "<<q.peek()<<endl;
    q.deque();
    


    return 0;
}
