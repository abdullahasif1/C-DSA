#include<iostream>
using namespace std;
#include<vector>
#include <algorithm>
int main(){
    int n,target;

    cout<<"Enter the length of ur Array: ";
    cin>>n;
    cout<<"Enter the target sum you want to find: ";
    cin>>target;
    vector<int> v(n);
    cout<<"Enter ur element below...\n";
    for(auto &i:v)
        cin>>i;

    int tempsumLH;
    sort(v.begin(),v.end());


    for(int i=0;i<v.size();i++){
        int low=i+1;
        int high=n-1;

        while(low<high){

            tempsumLH=v[low]+v[high];
            if(tempsumLH==(target-v[i])){     //fixing v[i] so target-v[i]
                cout<<"Found!\n";
                return 0;
            }
            else if(tempsumLH>(target-v[i]))
                high--;

            else
                low++;

        }
    }

    cout<<"not found!\n";
    return 0;
}
