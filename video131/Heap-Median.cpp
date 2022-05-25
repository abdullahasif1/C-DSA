#include<iostream>
#include<queue>
using namespace std;

priority_queue<int, vector<int> > pq;
priority_queue<int, vector<int>, greater<int> > pqm;


void insert(int a){

    //Case 1if both queue have same size
    if(pq.size()==pqm.size()){
    
        
        //case1.1 when pq & pqm size()=0
        if(pq.size()==0){
            pq.push(a);
             return;
        }

        else{
            if(a>=pq.top())
                pqm.push(a);
            
            else
                pq.push(a);
            
        }
    }
    else{

        //two cases: either pq is > or pqm is >

        if(pq.size()>pqm.size()){     //case 2.1
            if(a>=pq.top())      //if x is greater then pq.top then add it to pqm queue
                pqm.push(a);
            else{
                int temp=pq.top();    //else pop from pq and put a int pq
                pq.pop();              // then put temp value in pqm
                pq.push(a);
                pqm.push(temp);
            }
        }


        else{                    //Case 2.2  if pq.size is less the pqm.size
            if(a<=pqm.top())
                pq.push(a);
            else{
                int tempp=pqm.top();
                pqm.pop();
                pqm.push(a);
                pq.push(tempp);
            }
        }
    }
}
void median(){
   
    if(pq.size()==1 && pqm.size()==0){
            cout<<"Median is "<<pq.top()<<endl;
            return;
    }
    if(pq.size()==pqm.size()){
        if(pq.size()==0){
            cout<<"No element exists!\n";
            return;
        }
        else{
            float med=((pq.top()+pqm.top())/2);           
            cout<<"Median is "<<med<<endl;
            return;
        }
    }
    else{
        if(pq.size()>pqm.size())
            cout<<"Median is "<<pq.top()<<endl;
        else
            cout<<"Median is "<<pqm.top()<<endl;
    }
}

int main(){

    median();

    insert(10);
    median();

    insert(15);
    median();

    insert(21);
    median();

    insert(30);
    median();

    insert(18);
    median;

    insert(19);
    median();
    
    //cout<<"Size of pq: "<<pq.size()<<endl;
    //cout<<"Size of Pqm: "<<pqm.size()<<endl;
    return 0;
}

