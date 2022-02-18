#include<iostream>
using namespace std;
int main(){
    int n1,n2,n3;
    cout<<"Enter the number of rows and columns of first matrix: ";
    cin>>n1>>n2;
    int mat1[n1][n2];

    cout<<"Enter the elements in first matrix...\n";
        for(int i=0;i<n1;i++){
            for(int j=0;j<n2;j++){
                cin>>mat1[i][j];
            }
        }

    cout<<"Enter the number of rows and columns of first matrix: ";
     cin>>n2>>n3;
     int mat2[n2][n3];

    cout<<"Enter the elements in 2nd array...\n";
        for(int i=0;i<n2;i++){
           for(int j=0;j<n3;j++){
               cin>>mat2[i][j];
           }
       }
    int result[n1][n3];
        for(int i=0;i<n1;i++){
            for(int j=0;j<n3;j++){
                for(int k=0;k<n2;k++){
                    result[i][j]+=mat1[i][k]*mat2[k][j];
                }
            }
        }

        for(int i=0;i<n1;i++){
            for(int j=0;j<n3;j++){
                cout<<result[i][j]<<" ";
            }
            cout<<endl;
        }
    return 0;
}
