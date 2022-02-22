#include <iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string x;
    cout<<"Converting a number in sting into biggest possible form of that number!\n";
    cout<<"Enter any number: ";
    cin>>x;

        sort(x.begin(),x.end(), greater<int>());
    cout<<"Your biggest number possible is: "<<x<<endl;
        sort(x.begin(),x.end());
    cout<<"Your smallest number possible is: "<<x<<endl;

    cout<<"-------------\n";
    cout<<"Most repeated alphabet in ur string!\n";
    cout<<"Enter a string: ";
    cin>>x;
    int count[26];
        for(int i=0;i<26;i++)
             count[i]=0;

        for(int i=0;i<x.length();i++)
            count[x[i]-'a']++;      //count['a'-'a']=count[0]

    int times=0,counter=0;
    char most;
    string str="      ";

        for(int i=0;i<26;i++){
            if(count[i]>times){
                most='a'+ i;
                counter=0;
                times=count[i];
            }
            else if(count[i]==times){
                str[counter]=most;
                most='a'+i;
                counter++;
                str[counter]=most;
            }
        }
    cout<<"Most Repeated "<<times<<" times alphabets are: ";
        for(int i=0;i<str.length();i++)
            cout<<str[i]<<" & ";
        
        cout<<endl;

 return 0;
}
