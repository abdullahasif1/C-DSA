#include<iostream>
using namespace std;
int main(){

        double x,y;
        char o;
            cout<<"Enter the first number: ";
            cin>>x;
            cout<<"Enter the operator you want to use(*,/,-,+): ";
            cin>>o;
            cout<<"Enter the second number: ";
            cin>>y;
            switch(o){
                case '*':
                    cout<<"Your solution is: "<<x*y<<endl;
                    break;
                case '/':
                    cout<<"Your solution is: "<<x/y<<endl;
                    break;
                case '+':
                    cout<<"Your solution is: "<<x+y<<endl;
                    break;
                case '-':
                    cout<<"Your solution is: "<<x-y<<endl;
                    break;

            default:
                    cout<<"Operator entered is not valid.\n";
                    
            }




    return 0;
}
