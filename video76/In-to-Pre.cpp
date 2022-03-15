#include<iostream>
#include<stack>
#include<algorithm>                             //just by reversing the infix expression and exchanging '(' with ')'
using namespace std;                            // and ')' with '('  then applying the same postfix method we get
int precedence(char c){                         //    lka/-cb/a-*   from (a-b/c)*(a/k-l)
                                                // at last reverse lka/-cb/a-*  we get        '*-a/bc-/akl'
    if(c=='*' || c=='/'){
        return 2;
    }
    else if(c=='+' || c=='-'){
        return 1;
    }

    else{
    return -1;
    }
}

void InfixtoPostfix(string x){

    reverse(x.begin(),x.end());
    cout<<"your string when reversed: "<<x<<endl;

    for(int i=0;i<x.length();i++){
        if(x[i]=='(')
            x[i]=')';

        else if(x[i]==')')
            x[i]='(';
    }
    cout<<"After exchange of bracket ur string is: "<<x<<endl;
    stack<char> obj;
    string temp;                //will be holding the postfix expression

    for(int i=0;i<x.length();i++){

        if((x[i]>='a' && x[i]<='z') || (x[i]>='A' && x[i]<='Z')){
            temp+=x[i];          //storing "abc"  operand  
        }

        else if(x[i]=='('){
            obj.push(x[i]);
        }

        else if(x[i]==')'){
            while(!obj.empty() && obj.top()!='('){
               temp+=obj.top();
               obj.pop();
            }

            if(!obj.empty()){
                obj.pop();
            }     //this will pop   '('


        }
 
        else{

            while(!obj.empty() && precedence(obj.top())>precedence(x[i])){
                temp+=obj.top();
                obj.pop();
            }
            obj.push(x[i]);
        }
    }
    while(!obj.empty()){
        temp+=obj.top();                 //popping out last operators in stack
        obj.pop();
    }

    reverse(temp.begin(),temp.end());
    cout<<"Your post expression is: "<<temp<<endl;
}
 
int main(){
    string s;
    cout<<"Enter ur Infix Expression: ";
    cin>>s;

    InfixtoPostfix("(a-b/c)*(a/k-l)");

    return 0;
}
