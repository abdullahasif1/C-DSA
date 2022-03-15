#include<iostream>
#include<stack>
using namespace std;
int precedence(char c){

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

    stack<char> obj;
    string temp;                //will be holding the postfix expression

    for(int i=0;i<x.length();i++){

        if((x[i]>='a' && x[i]<='z') || (x[i]>='A' && x[i]<='Z')){
            temp+=x[i];
            cout<<"Updated temp: "<<temp<<"\n";//storing "abc"  operand  
        }

        else if(x[i]=='('){
            cout<<"( is pushed in stack!\n";
            obj.push(x[i]);
        }

        else if(x[i]==')'){
            while(!obj.empty() && obj.top()!='('){
                temp+=obj.top();
                cout<<"Popping : "<<obj.top()<<endl;
                cout<<"So now temp is: "<<temp<<endl;
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

    cout<<"Your post expression is: "<<temp<<endl;
}

int main(){
    string s;
 //   cout<<"Enter ur Infix Expression: ";
  //  cin>>s;

    InfixtoPostfix("(a-b/c)*(a/k-l)");

    return 0;
}
