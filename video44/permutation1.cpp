#include<iostream>
#include "bits/stdc++.h"
using namespace std;

vector<vector<int>> ans;

void permute(vector<int> &a, int idx){
    if(idx == a.size()){
        ans.push_back(a);
        return;
    }
    for(int i=idx;i<a.size();i++){
        swap(a[i],a[idx]);
        permute(a,idx+1);
        swap(a[i],a[idx]);
    }
    return;
}

int main(){
    int x;
    cout<<"Enter the number of element: ";
    cin>>x;

    vector<int> a(x);
    cout<<"Enter the value "<<x<<" number of values... "<<endl;
    for(auto &i : a)
        cin>>i;

//    permute(a,0);       instead of using this we can STL function as well which is as below

    sort(a.begin(),a.end());
    do{
        ans.push_back(a);
    }while(next_permutation(a.begin(),a.end()));


    for(auto v : ans){
        for(auto i : v)
            cout<<i<<" ";
        cout<<"\n";
    }
    return 0;
}
