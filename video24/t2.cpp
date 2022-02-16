#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the length of ur array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of ur array...\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    const int N=1e6;
    bool check[N];
    for(int i=0;i<N;i++){
        check[i]= false;
    }

    for(int i=0;i<n;i++){
        if(arr[i]>=0){
            check[arr[i]]= true;
        }
    }
    int sol=-1;
    for(int i=0;i<N;i++){
        if(check[i]==false){
            sol=i;
            break;
        }

    }
    cout<<"Your smallest positive missing interger is: "<<sol<<endl;
    return 0;
}
