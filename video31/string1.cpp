#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string s1="abc";
    string s2="xyz";
    cout<<"Comparing string s1=abc & s2=xyz by s2.compare(s1) gives:  "<<s2.compare(s1)<<endl;


    cout<<"--------------\n";
    cout<<"Enter string to check if it is equal to s1=abc: ";
    cin>>s2;
    cout<<"If s1=abc, s2.compare(s1) gives: "<<s2.compare(s1)<<endl;
    if(s1.compare(s2)==0){         //if(!s1.compare(s2)) as 0 means false so ! used
        cout<<"String is equal!\n";
    }
    else{
        cout<<"Not equal!\n";
    }


    cout<<"s1=abc, so s1[2] gives: "<<s1[2]<<endl;


    cout<<"---------------\n";
    s1="nincompoop";
    cout<<"If s1=nincompoop, we use s1.erase(3,2) gives: "<<s1.erase(3,2)<<endl;

    cout<<"----------\n";
    cout<<"By s1.find(poop): "<<s1.find("poop")<<endl;


    cout<<"--------------\n";
    cout<<"Inserting string into string, s1.insert(2,lol) gives:  "<<s1.insert(2,"lol")<<endl;

    cout<<"--------------\n";
    cout<<"Using s1.length()!\n";
    for(int i=0;i<s1.length();i++){
        cout<<s1[i]<<endl;
    }


    cout<<"-------------\n";
    s1="786";
    int s=stoi(s1);
    cout<<"Changing string into integer by stoi(s1) where s1='786': "<<s+2<<endl;

    cout<<"Chnaging integer to string by tostring(s) + 2, where s=788: "<<to_string(s)+"2"<<endl;

    cout<<"-----------\n";
    cout<<"Sorting function!\n";
    s1="beafbfdafdxxzbsdf";
    cout<<"Sorting s1=beafbfdafdxxzbsdf by sort(s1.begin(), s1.end()): ";
    sort(s1.begin(), s1.end());    //#include<algorithm>
    cout<<s1<<endl;
    return 0;
}
