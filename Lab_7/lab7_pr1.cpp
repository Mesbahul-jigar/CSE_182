#include<iostream>
using namespace std;

int main()
{
     int n , i , j, temp;
     cout<<"Number of elements= ";
     cin>>n;
     cout<<"Give "<< n <<" elements: ";
     
     int  A[n];
     for( i = 0 ; i < n ; i++){
     	cin>>A[i];
     }

     for( i = 0 ; i < n-1 ; i++){
        for( j = 0 ; j < n-1; j++){
            if(A[j]>A[j+1]){
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
          }
       }
       
       cout<<"Maximum Element=  "<<A[n-1]<<"\n"<<"Minimum Element= "<<A[0];
    return 0;
}
