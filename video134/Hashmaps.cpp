#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main(){
    //creation
    unordered_map<string,int> um;


    //insertion
    pair<string,int> p1= make_pair("Asif",3);    //way 1
    um.insert(p1);

    pair<string,int> p2("Abdullah",1);           //way 2
    um.insert(p2);


    um["Qazi"]=1;                   //way 3
    um["Qazi"]=4;         //this will rewrite Qazi with updated value 4





    //Search
    cout<<um["Qazi"]<<endl;            //must have 4 as it is updated
    cout<<um.at("Asif")<<endl;         //3

    //cout<<um.at("Unknown")<<endl;       //will give you error
    cout<<um["Unknown"]<<endl;           //entry is generated in hashmap with value 0
    
    cout<<um.at("Unknown")<<endl;        //after um[unknown], this will give 0
    
    
    return 0;
}
