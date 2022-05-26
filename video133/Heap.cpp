#include<iostream>
#include<queue>
using namespace std;
int main(){

    int n=0;

    int k=0;
    int countofss=0;



    cout<<"Enter the size of array: ";
    cin>>n;
    int* ptr = (int*) malloc(n * sizeof(int));

    priority_queue<int, vector<int> > pqmax;
    
    cout<<"Enter Values in Array\n";
    for(int i=0;i<n;i++) {
        cin>>ptr[i];
        pqmax.push(ptr[i]);
    }

    cout<<"Enter the sum K: ";
    cin>>k;
    int sum=0;
    while(!pqmax.empty()){

        sum+=pqmax.top();
        pqmax.pop();
        countofss++;
        if(sum>=k){
            cout<<"Value of smallest subsequence with sum k is: "<<countofss<<endl;
            break;
        }
    }

    if(sum<k)
        cout<<"SubSequence doesn't exits!\n";

    return 0;
}
