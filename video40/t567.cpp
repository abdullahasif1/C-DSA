#include<iostream>
using namespace std;
void substring(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch=s[0];
    int code=ch;
    string ros=s.substr(1);         //ros=restofstring

    substring(ros,ans);
    substring(ros,ans+ch);
    substring(ros,ans+ to_string(code));
}


string moveX(string s){
    if(s.length()==0){
        return "";
    }

    char ch=s[0];
    string ans= moveX(s.substr(1));

    if(ch=='x' || ch=='X'){
        return ans+ch;
    }
    return ch+ans;

}
int main(){
    string s;
    cout<<"Enter any string to move all its X/x to last: ";
    cin>>s;
cout<<moveX(s)<<endl;
    
    cout<<"-----------\n";
    cout<<"Formimg substrings!\n";
   substring("AB", "");
    return 0;
}
