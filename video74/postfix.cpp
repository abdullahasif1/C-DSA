#include<iostream>
#include<stack>
#include<math.h>
using namespace std;

int postfixtotal(string x){
    stack<int> obj;
    for(int i=0;i<x.length();i++){
        if(x[i]>='0' && x[i]<='9'){
            obj.push(x[i]-'0');
        }                         //so that we can get the value in int as
                                  //s[i] is a string 
        else{
            int op1=obj.top();
            obj.pop();
            int op2=obj.top();
            obj.pop();

            switch(x[i]){          //can be done by if else           
                case '+':
                    obj.push(op2+op1);
                    break;

                case '-':
                    obj.push(op2-op1);
                    break;

                case '*':
                    obj.push(op1*op2);
                    break;

                case '/':
                    obj.push(op2/op1);
                    break;
            }
        }
    }

    return obj.top();
}
int main(){
    cout<<postfixtotal("46+2/5*7+")<<endl;
    return 0;
}
