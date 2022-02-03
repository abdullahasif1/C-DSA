#include<iostream>
using namespace std;
int main(){


    int row,col;
   
    cout<<"Rectangular Pattern!\n";
    cout<<"Enter the number of rows of a rectangle: ";
    cin>>row;
    cout<<"Enter the number of columns: ";   //*****   if row=3 & col=5
    cin>>col;                                //*****
                                             //*****
        for(int i=1;i<=row;i++){                   
            for(int j=1;j<=col;j++){
                cout<<"*";
            }
            cout<<endl;
        }

    cout<<"--------------------\n";

    cout<<"Hollow Rectangles!\n";
    cout<<"Enter the number of rows and column: ";      //********   if r=4 &col=8
    cin>>row>>col;                                      //*      *
                                                        //*      *
        for(int i=1;i<=row;i++){                        //********
            for(int j=1;j<=col;j++){
                if(i==1 || i==row || j==1 || j==col){
                    cout<<"*";
                }
                else{
                cout<<" ";
                }
            }
            cout<<endl;
        }   

    cout<<"----------------\n";

    cout<<"Inverted Half Pyramid!\n";           //****
    cout<<"Enter the number of rows: ";         //***
    cin>>row;                                   //**
        for(int i=0;i<=row-1;i++){              //*
            for(int j=1;j<=row-i;j++){
                cout<<"*";
            }
            cout<<endl;
        }   

     cout<<"----------------\n";
     cout<<"Half Pyramid After 180* Rotation!\n";
     cout<<"Enter the number of rows: ";             //     *
     cin>>row;                                       //    **
                                                     //   ***
        for(int i=1;i<=row;i++){                     //  ****
            for(int j=1;j<=row;j++){
                if(j<=row-i){
                    cout<<" ";
                }
                else{
                    cout<<"*";
                }
            }
            cout<<endl;
        } 

    cout<<"----------------\n";
    cout<<"Half Pyramid Using Numbers!\n";
    cout<<"Enter the number of rows: ";          //1
    cin>>row;                                    //2 2
                                                 //3 3 3 
        for(int i=1;i<=row;i++){                 //4 4 4 4 
            for(int j=1;j<=i;j++){
                cout<<i;
            }
            cout<<endl;
        }

    cout<<"-----------------\n";
    cout<<"Floyd's Trinagle!\n";
    cout<<"Enter the number of rows(column=rows): ";
    cin>>row;                                            //1
                                                         //2 3
    int count=1;                                         //4 5 6
                                                         //7 8 9 10
        for(int i=1;i<=row;i++){
             for(int j=1;j<=i;j++){
                 cout<<count<<" ";
                 count++;
             }
             cout<<endl;
        }
        
      return 0;
}
