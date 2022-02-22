#include <iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string x;
    cout<<"Converting string to Upper Alphabets!\n";
    cout<<"Enter any string: ";
    cin>>x;
    
  //  cout<<x.size();       both gives the same answer
  //  cout<<x.length();
    for(int i=0;i<x.size();i++){
        if(x[i]>='a' && x[i]<='z'){        //if(x[i]>='A' && x[i]<='B')
            x[i]-= 32;                     //x[i]+=32;(for upper to lower)
        }
    }
    cout<<"Your string is changed: "<<x<<endl;

    cout<<"------------\n";
    cout<<"Converting to Lower case by transform()!\n";
        transform(x.begin(),x.end(),x.begin(), ::tolower);
    cout<<"Your string is changed to lower case: "<<x<<endl;

    cout<<"Converting to Upper case by transform() !\n";
        transform(x.begin(),x.end(),x.begin(), ::toupper);
    cout<<"Your string is converted to Upper case: "<<x<<endl;

    return 0;
}

