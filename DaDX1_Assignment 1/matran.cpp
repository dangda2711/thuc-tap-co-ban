#include<iostream>
using namespace std;
void nhapMaTran(int** maTran1, int hang, int cot){
    for(int i=0; i<hang; i++){
        for(int j=0;j<cot; j++){
            cout<<"MT["<<i<<"]["<<j<<"]=";
            cin>>*(*(maTran1+i)+j);
        }
    }
}
void xuatMaTran(int** maTran1, int hang, int cot ){
    cout<<"Ma tran :\n";
    for(int i=0; i<hang; i++){
            cout<<"\n";
        for(int j=0;j<cot; j++){
            cout<<*(*(maTran1+i)+j)<<"\t";
        }
    }

}
void swap(int &a, int &b){
int temp = a;
a=b;
b=temp;
}

void sapXepMang(int* arr, int n){
    for(int i=0; i<n-1; i++){
        for(int j=n-1; j>i; j--){
            if(arr[j]<arr[j-1]){
                swap(arr[j], arr[j-1]);
            }
        }
    }
}
void sapXepMaTran(int **maTran, int hang, int cot){
    int *arr= new int[hang*cot];
    //static int count=0;
    for(int i=0; i<hang; i++){
        for(int j=0; j<cot; j++){
           * ( arr + i*cot + j)=*(*(maTran+i)+j);
        }
    }
    sapXepMang(arr, hang*cot);
    cout<<"Ma tran sau khi sap xep la:"<<endl ;
    for(int i=0; i<hang; i++){
        int count= cot*i;
        for(int j=0;j<cot; j++ ){
            maTran[i][j]= arr[count];
            count ++;
        }
    }

}
int main(){
    int hang;
    int cot;
    cout<<"nhap so hang:";
    cin>>hang;
    cout<<"nhap so cot: ";
    cin>>cot;

    int** maTran= new int*[hang];
    for(int i=0; i<hang; i++){
        *(maTran+i)=new int[cot];
    }
    nhapMaTran(maTran, hang, cot);
    sapXepMaTran(maTran, hang, cot);
    xuatMaTran(maTran, hang, cot);
return 0;}



