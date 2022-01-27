#include<iostream>
using namespace std;
 class concatename{
      public:
           char *name;
           int size;             
         concatename(int x){
             size=x;
             name = new char[size];
                                                                    
         }
         void setter(){
         
             int po;
                         cout<<"Enter name: ";
                         cin>>name;
                    // cout<<"You entered : "<<name;
         }

};

int main(){
         
    int a,b;
    cout<<"Enter the lenght of ur name: ";
    cin>>a;
    concatename obj1(a);
    
    obj1.setter();
    cout<<"Enter the lenght of ur other name: ";
    cin>>b;
    concatename obj2(b);
    obj2.setter();
            

     int size=a+b+1;
     int z=1;
     char* arr;

      arr = new char[size];
    for(int i=0;i<a;i++){ 
     arr[i]= obj1.name[i];
          z++;                        
    }

//arr[z]= "-";
     for(int j=0;j<b;j++){
           z++;
           arr[z]=obj2.name[j];
      }
      
        cout<<"size of arr : "<<size<<"And name is : "<<z;
    
    
    
    
    
    
    
    return 0;
}
