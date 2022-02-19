#include<iostream>
using namespace std;
int main(){
    int l;
    cout<<"Enter the length of char array: ";
    cin>>l;
    char arr[l+1];
    cout<<"Enter somwthing into array...\n";
    cin>>arr;
    int i=0;
    bool result=false;
        while(i<=l/2){
            if(arr[i] != 'arr[l-i-j]'){
                result=true;
                break;
            }
            i++;
        }
        if(result){
            cout<<"Word is not a Palindrome!\n";
        }
        else{
            cout<<"Word is Palindrome\n";
        }

    return 0;
}
