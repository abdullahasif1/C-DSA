#include<iostream>
#include<stack>
#include<math.h>
using namespace std;

int prefixtotal(string x){
    stack<int> obj;
    for(int i=x.length()-1;i>-1;i--){
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
                    obj.push(op1+op2);
                    break;
            
                case '-':
                    obj.push(op1-op2);
                    break;
            
                case '*':
                    obj.push(op1*op2);
                    break;
            
                case '/':
                    obj.push(op1/op2);
                    break;
            }
        }
    }

    return obj.top();
}
int main(){
    cout<<prefixtotal("-5/63")<<endl;
    return 0;
}
