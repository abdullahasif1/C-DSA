#include<iostream>
using namespace std;
int main(){

    char x;
        cout<<"Enter any Alphabet from A-C: ";
        cin>>x;

            switch(x){
                case 'a':
                case 'A':
                    cout<<"Salam\n";
                break;

                case 'b':
                case 'B':
                    cout<<"Hello\n";
                break;

                case 'c':
                case 'C':
                    cout<<"Hola\n";
                break;


            default:
                cout<<"I'm still learning more.\n";
                break;
            }

    return 0;
}
