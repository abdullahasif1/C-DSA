#include<iostream>
#include<stack>
using namespace std;

void insertBottom(stack<int> &a,int x){

    if(a.empty()){
        a.push(x);
        return;
    }

    int topele=a.top();
    a.pop();
    insertBottom(a,x);

    a.push(topele);

}

void reverse(stack<int> &a){


                              //       if(count==1){
                              //            temp=a.top();
                              //            count++;
                              //       }
    if(a.empty()){
        return;
    }

    int lastelementb4call=a.top();          //cause pop doesnt return value to you)
    a.pop();                  //to pop the last lets say 3
    reverse(a);

    insertBottom(a,lastelementb4call);

   // insertBottom(a,lastelementb4call);

}

int main(){

    stack<int> xyz;
    xyz.push(1);
    xyz.push(2);
    xyz.push(3);

    reverse(xyz);

    while(!xyz.empty()){
        cout<<xyz.top()<<endl;
        xyz.pop();
    }
}
