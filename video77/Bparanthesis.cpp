#include<iostream>
using namespace std;
#include<stack>

void balanced(string s){
    stack<char> obj;
    
    for(int i=0;i<s.length();i++){
        if(s[i]=='(' || s[i]=='[' ||s[i]=='{')
            obj.push(s[i]);

        else{
            if(s[i]==')' && obj.top()=='(')
                obj.pop();
            
            else if(s[i]==']' && obj.top()=='[')
                obj.pop();
            
            else if(s[i]=='}' && obj.top()=='{')
                obj.pop();
            
            else{
                cout<<"Paranthesis are Not balanced!\n";
                return;
            }
        }
    }
    cout<<"They are balanced!\n";
}


int main(){
    string s;
    cout<<"Enter ur paranthesis: ";
    cin>>s;
    balanced(s);
    return 0;
}
