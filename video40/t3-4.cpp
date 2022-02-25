#include<iostream>
using namespace std;
string remodup(string s){
    if(s.length()==0){
        return " ";
    }
    char ch=s[0];
    string ans=remodup(s.substr(1));
    
    if(ch==ans[0]){
        return ans;
    }

    return (ch+ans);
}

void towerofHanoi(int n, char src,char dest,char helper){

    if(n==0){
        return;
    }

    towerofHanoi(n-1,src,helper,dest);
    cout<<"Move from "<<src<<" to "<<dest<<endl;
    towerofHanoi(n-1,helper,dest,src);
}
int main(){
    cout<<"If we have stack of 3 'A' 'B' 'C' in Tower of Hanoi!\n";
    towerofHanoi(3,'A','B','C');

    cout<<"-------------\n";
    cout<<"Removing Duplicates in a string!\n  aaaaabbbbbbeedddddd\n";
    cout<<remodup("aaaaabbbbbbeedddddd");
    return 0;
}
