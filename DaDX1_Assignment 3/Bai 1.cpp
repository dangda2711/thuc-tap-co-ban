#include <iostream>
using namespace std;


void xuatMaTran(int** arr, int hang, int cot){
    for(int i=0; i<hang; i++){
        cout<<"\n";
        for(int j=0; j<cot; j++){
            cout<<*(*(arr+i)+j)<<"\t";
        }
    }
}
void nhapMaTran(int **arr, int hang, int cot)
{


    for(int i=0; i<hang; i++){
        for(int j=0; j<cot; j++){
                cout<<"arr["<<i<<"]["<<j<<"]=";
                cin>>*(*(arr+i)+j);
    }

}
}
void tongMaTran(int** arr1,int **arr2, int hang, int cot ){
    for(int i=0; i<hang;i++){
        for(int j=0; j<cot; j++){
            *(*(arr1+i)+j)+=*(*(arr2+i)+j);
        }
    }
}
int main()
{
    int hang, cot;
    cout<<"Nhap so hang:"; cin>> hang;
    cout<<"Nhap so cot: "; cin>>cot;
    int **arr1;
    arr1= new int*[hang];
    for(int i=0; i<cot; i++){
        arr1[i]= new int[cot];
    }
    int **arr2;
    arr2= new int*[hang];
    for(int i=0; i<hang; i++){
        arr2[i]= new int[cot];
    }

    cout<<"\n Nhap ma tran 1:"<<endl;
    nhapMaTran(arr1, hang, cot);
    cout<<"\n Nhap ma tran 2:"<<endl;
    nhapMaTran(arr2, hang, cot);
    cout<<"\n Ma tran arr1:"<<endl;
    xuatMaTran(arr1, hang, cot);
    cout<<"\n Ma tran arr2:"<<endl;
    xuatMaTran(arr2, hang, cot);
    tongMaTran(arr1, arr2, hang, cot);
    cout<<"\n tong cua Ma tran arr1 va arr2:"<<endl;
    xuatMaTran(arr1, hang , cot);
    return 0;
}


