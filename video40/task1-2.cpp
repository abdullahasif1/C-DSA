#include<iostream>
using namespace std;
void reverse(string s){
    if(s.length()==0){    //base case
        return;
    }
    string ros=s.substr(1);
    reverse(ros);
    cout<<s[0];
}

void replacePi(string s){
    
    if(s.length()==0){
        return;
    }

    if(s[0]=='p' && s[1]=='i'){
        cout<<"3.14";
        replacePi(s.substr(2));
    }
    else{
        cout<<s[0];
        replacePi(s.substr(1));
    }

}
int main(){
    string s;
    cout<<"Reversing a string 'Rosie': ";
    reverse("Rosie");
    cout<<endl;
    cout<<"Enter a string to reverse it: ";
    cin>>s;
    reverse(s);
    cout<<endl;

    cout<<"-----------\n";
    cout<<"Replacing Pi with 3.14 in pippppppipi!\n";

    replacePi("pippppppipi");


    return 0;
}
