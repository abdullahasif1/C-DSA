#include<iostream>
using namespace std;
  
class employee{
    string name;
    public:
 
    int age;
    bool gender;
 
    employee(){                          //default constructor
        cout<<"Im a default constructor!\n";
    }
 
    employee(string s,int g,int a){      //parameterized constructor
        cout<<"Im a parameterized constructor!\n";
        name=s;
        gender=g; 
        age=a;
    }
 
    employee(employee &a){
        cout<<"Im a Copy constructor!\n";
        name=a.name;
        gender=a.gender;
        age=a.age;
    }
    bool operator == (employee &a){
        if(name==a.name && gender==a.gender && age==a.age){
            cout<<"Name: "<<name<<"\n";
            cout<<"a.name: "<<a.name<<endl;
            return true;
        }
         cout<<"Name: "<<name<<"\n";
             cout<<"a.name: "<<a.name<<endl;

        return false;
    }
 
    void printinfo(){
        cout<<"Name is: ";
        cout<<name<<endl;
        cout<<"Age is: ";
        cout<<age<<endl;
        cout<<"Gender is: ";
        cout<<gender<<endl;
 
    }
 
    ~employee(){
        cout<<"Destructor called!\n";
    }
};
int main(){
    employee a("Abdullah",0,24);
   // cout<<"Employee A info: \n";
    //a.printinfo();
    employee b("Scarlet",1,22);
    cout<<"Calling parameterized copy constructor...\n";
    employee c = a;
    

    if(c==b){
        cout<<"Same\n";
    }
    else{
        cout<<"Not same\n";
    }
 
 
 
    return 0;
}

