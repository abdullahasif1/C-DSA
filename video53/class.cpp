#include<iostream>
using namespace std;


class employee{
 // string name1;         //by default private so cant be accessed outside
    //in order to access private data member we use functions present 
    //in the same class to access those private data members
    
    public:
    string name;
    int age;
    bool gender;

    void setName(string s){   //setter and getter
        name=s;             
    }
    void getName(){
        cout<<name<<endl;   //if and only if name is a private data member
    }

    void printinfo(){
        cout<<"Name is: ";
        cout<<name<<endl;
        cout<<"Age is: ";
        cout<<age<<endl;
        cout<<"Gender is: ";
        cout<<gender<<endl;
        
    }
};

int main(){

    employee arr[3];
    string s;
    for(int i=0;i<3;i++){
        cout<<"Name: ";
        cin>>arr[i].name;     //for setName "cin>>s;" "arr[i]=setName(s);"
        cout<<"Age: ";
        cin>>arr[i].age;
        cout<<"Gender: ";
        cin>>arr[i].gender;
    }

    for(int i=0;i<3;i++){
        arr[i].printinfo();
    }
    return 0;
}
