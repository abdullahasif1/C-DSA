#include<iostream>
using namespace std;
#define n 10
class queue{
    int* arr;                 //cause doing Queue on Arrays
    int front;
    int end;
    public:
    queue(){
        arr=new int(n);
        front=-1;
        end=-1;
    }
    
    void push(int x){
        if(front==-1){
            front++;
            arr[front]=x;
        }

        if(end==n-1){
            cout<<"Cant add more in Queue!\n";
            return;
        }
        end++;
        arr[end]=x;
    }

    int peek(){
        if(front==-1 || front>end){
            cout<<"No Element present!(-1)\n";
            return -1;
        }
        cout<<"Value at front is: "<<arr[front]<<endl;
        return arr[front];         //so that top value can be saved if needed
    }

    void pop(){
        if(front==-1 || front>end){
            cout<<"No Element to pop!\n";
            return;
           }
        front++;
    }

    int empty(){
        if(front==-1 || front>end){
            cout<<"Queue is Empty(1)\n";
            return 1;
              }
        cout<<"Not Empty!(0)\n";
        return 0;

    }

};
int main(){

    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    cout<<q.empty()<<endl;
    cout<<q.peek()<<endl;               //1
    q.pop();                            //1 poped

    q.pop();                             //2 poped
    cout<<q.peek()<<endl;                //3

    q.pop();
    cout<<q.peek()<<endl;
    return 0;
}
