#include<iostream>
#include<climits>
using namespace std;
int main(){
    int x;
    cout<<"Enter the length of ur arra: ";
    cin>>x;
    int arr[x];
    const int N=1e6;
    int idx[N];
    int mini=INT_MAX;

    for(int i=0;i<N;i++){
           idx[i]=-1;
       }

    cout<<"Enter the elements in arra...\n";
    for(int i=0;i<x;i++){
        cin>>arr[i];
    }

    for(int i=0;i<x;i++){
        if(idx[arr[i]]==-1){
            idx[arr[i]]=i;
        }
        else{
            mini=min(mini, idx[arr[i]]);
        }
    }

    if(mini==INT_MAX){
        cout<<"No repeating element found!\n";
    }
    else{
        cout<<"Your Repeating element whose 1st occurences idex is smallers is at: "<<mini+1<<endl;
    }
    return 0;
}
