#include<iostream>
using namespace std;
class A{
    public:
    void fun(){
        cout<<"Im a function in class A!\n";
    } 
};
class B: public A{
    public:
        void fun2(){
        cout<<"Im a function in class B\n";
    }
};
class C: public B{           //multi level 
    int roof;                 
    public: 
    void fun3(){
        cout<<"Im in Class C\n";
    }
};


int main(){
    C c;
    c.fun();
}
