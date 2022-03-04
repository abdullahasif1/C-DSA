#include<iostream>
using namespace std;

class base{

    public:
        virtual void print(){            //virtual void for not printing base case
            cout<<"This is the base class's print funtion!\n";
        }
        void display(){
            cout<<"This is the base class's display function!\n";
        }
};

class child: public base{
 public:
         void print(){
             cout<<"This is the Child class's print funtion!\n";
         }
         void display(){
             cout<<"This is the Child class's display function!\n";
         }

};
int main(){
    base *baseptr;
    child c;
    baseptr = &c;

    baseptr -> print();
    baseptr -> display();
    return 0;
}
