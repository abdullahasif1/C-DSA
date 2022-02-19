#include<iostream>
using namespace std;
int main(){
    int len;
    cout<<"Enter the length of ur array: ";
    cin>>len;
    cin.ignore();
    char arr[len+1];
 
    cout<<"Enter the elements in array...\n";
  //  cin>>arr;
    cin.getline(arr, len);
 //   cin.ignore();
    int maxLen=0, cLen=0;
    for(int i=0;i<len;i++){
        if(arr[i]==' ' || arr[i]=='\0'){
            if(cLen>maxLen){
                maxLen=cLen;
            }
            cLen=0;
        }
        else{
            cLen++;
        }
        if(arr[i]=='\0')
            break;

    }
    cout<<"Maximum length of a word in ur array is: "<<maxLen<<endl;
    return 0;
}
