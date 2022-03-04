#include<iostream>
using namespace std;

class functionOverloading{

    public:
        void fun(){
            cout<<"Im am a function with no argument! \n";
        }
        void fun(int s){
            cout<<"Im am a function with one arguments int! \n";
        }
        void fun(string s){
            cout<<"Im am a function with one arguments String! \n";
        }
        void fun(int x, double y){
            cout<<"Im am a function with two arguments int double! \n";
        }
};

int main(){
    functionOverloading x;
    x.fun();
    x.fun(20);
    x.fun("Abdullah");
    x.fun(3,2.5);
    return 0;
}
