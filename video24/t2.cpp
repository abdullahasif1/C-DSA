#include<iostream>
#include<climits>
using namespace std;
int main(){
    int x;
    cout<<"Enter the length of ur array: ";
    cin>>x;
    int arr[x];
    cout<<"Enter the elements in array...\n";
    for(int i=0;i<x;i++){
        cin>>arr[i];
    }

    const int N = 1e6;
    int idx[N];

    for(int i=0;i<N;i++){
        idx[i]=-1;
    }

    int mini = INT_MAX;
    for(int i=0;i<x;i++){
        if(idx[arr[i]] == -1){
            idx[arr[i]]=i;
        }
        else{
            mini=min(mini,idx[arr[i]]);
        }
    }
    if(mini==INT_MAX){
        cout<<"No Repeating element found!\n";
    }
    else{
        cout<<"Your repeating element whose indrx of first occurence is smallers is: "<<mini+1<<endl;
    }
    return 0;
}
