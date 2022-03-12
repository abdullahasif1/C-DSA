#include<iostream>
#include<stack>
using namespace std;

void reversesentence(string s){
    stack<string> a;            //by include<stack> we have built in stack
    string word;

    for(int i=0;i<s.length();i++){
        word="";                  //after space word should be reset
        while(s[i]!=' ' && i<s.length()){
            word+=s[i];
            i++;
        }
        a.push(word);

    }

    while(!a.empty()){
        cout<<a.top()<<" ";
        a.pop();             //to remove the last word from stack

    }cout<<endl;

}
int main(){

    string s="Hello, lets fly!";
    //cout<<"Enter the string you want to reverse by Stack...\n";
    //cin>>s;
    reversesentence(s);
    return 0;
}
