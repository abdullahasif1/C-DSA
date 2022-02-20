#include<iostream>
#include <string>
using namespace std;
int main(){
    string x;
    cout<<"Enter into string: ";
    cin>>x;
    cout<<x<<endl;
    
    

    string str(5, 'a');
    cout<<"string str(5,'a') means: "<<str<<endl;



    string str1;
    cout<<"To enter a line into string with spaces, we use getline. so enter: ";
    getline(cin, str1);       //cin>>x; this will not take "sapce"   getline(cin,x)another way
    cout<<"Result is: "<<str1<<endl;
    
    

    string s1="fam";
    string s2="ily";
    cout<<"To concatenate two strings s1='fam' & s2='ily', we have two ways...\n";
    cout<<"first s1 + s2 gives : "<<s1+s2<<endl;

    s1.append(s2);
    cout<<"s1.append(s2) gives : "<<s1<<endl;
    
    cout<<"OR s1=s1+s2; means the same thing!\n";



    s1.clear();
    s2.clear();
    cout<<"s1.clear():  "<<s1<<endl;
    return 0;
}
