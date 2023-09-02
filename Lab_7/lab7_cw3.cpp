#include<iostream>
using namespace std;

int main()
{
    int beg, last, mid, i, j, k, item;
    int A[15]={11, 22, 30, 33, 40 , 44 , 55,60 ,66 ,77, 80 ,88 ,99};
    beg = 0;
    last = 13;

    cin>>item;
    mid = int ((beg+last)/2);
    cout<<"mid"<<" "<<mid<<"\n"<<endl;
    while(beg<last && A[mid] != item){
                            if(item < A[mid]){
                                        last = mid - 1;
                                        }
                            else{
                                beg = mid + 1;
                            }
    mid = int ((beg+last)/2);
    cout<<"mid"<<" "<<mid<<"\n"<<endl;
    }
    if( item == A[mid]){
        cout<< "Location of the item= "<<item<<" is; "<<mid+1;
    }
    else{
        cout<< "Item is not found"<<endl;
    }
    return 0;
}
