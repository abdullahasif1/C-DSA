#include<iostream>
using namespace std;
#include<vector>
void maxcon1swithKflips(vector<int> v){
    int maxcon1s=0;
    int ans=0;
    int start=0;
    int zerocount=0;
    int k=0;
    cout<<"Enter the K number of Zeros' that can be flipped: ";
    cin>>k;
    for(int end=0;end<v.size();end++){
        if(v[end]==0)
            zerocount++;


        while(zerocount>k){
            if(v[start]==0)
                zerocount--;

            start++;
            }    
        ans=max(ans,end-start+1);
    }
    cout<<"Ans is: "<<ans<<endl;
}

int main(){

    int n;
    cout<<"Enter the length of array";
    cin>>n;
    int target;
    
    vector<int> v(n);

    
    for(auto &element:v)
        cin>>element;
    

  //  for(auto element:v)         //for cout value in vector!
  //      cout<<element<<endl;

    maxcon1swithKflips(v);

    return 0;
}
