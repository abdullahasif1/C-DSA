 #include<iostream>
 using namespace std;
 void bubblesort(int arr[],int x){
     int temp;
     int count=1;
     while(count<x){            
         for(int i=0;i<x-count;i++){          
             if(arr[i]>arr[i+1]){           
                 temp=arr[i+1];             
                 arr[i+1]=arr[i];           
                 arr[i]=temp;
             }
         }
         count++;
     }
     cout<<"Array is Sorted through bubble Sort!\n";
     for(int i=0;i<x;i++){
         cout<<arr[i]<<" ";
     }
     cout<<endl;
     return ;
 }
 int main(){
     int x;
     cout<<"Enter the length of the array: ";
     cin>>x;
     int arr[x];
     cout<<"Enter the elements of the array...\n";
     for(int i=0;i<x;i++){
         cin>>arr[i];
     }
     bubblesort(arr,x);
     return 0;
 }

