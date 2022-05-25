#include<iostream>
#include<queue>
using namespace std;

int main(){

    priority_queue<int, vector<int> > pq;    //MaxHeap  <int(datatype), vector<int>(container of int values)  
    pq.push(2);
    pq.push(4);
    pq.push(1);


    cout<<"MaxHeap"<<endl;
    cout<<pq.top()<<endl;      //4
    pq.pop();

    cout<<pq.top()<<endl;      //2
    pq.pop();

    cout<<pq.top()<<endl;      //1


    priority_queue<int, vector<int>, greater<int> > pqm; //MinHeap (m-min)

    
     pqm.push(2);
     pqm.push(4);
     pqm.push(1);
 
 
     cout<<"MinHeap"<<endl;
     cout<<pqm.top()<<endl;      //1
     pqm.pop();
 
     cout<<pqm.top()<<endl;      //2
     pqm.pop();
 
     cout<<pqm.top()<<endl;      //4







    return 0;
}
