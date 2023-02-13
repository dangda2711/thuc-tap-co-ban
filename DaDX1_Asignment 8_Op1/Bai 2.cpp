#include<iostream>
#include<math.h>
using namespace std;
class MaTran{
public :
    int hang;
    int cot;
    float **matran;
    MaTran(int hang, int cot){
       this->hang= hang;
       this->cot= cot;
       matran= new float*[hang];
        for(int i=0; i<hang; i++){
                *(matran+i)= new float[cot];
        }
    }
    ~MaTran(){
        int i;
        for (i=0;i<hang;i++)
            delete matran[i];
        delete matran;
    }


friend istream& operator>>(istream& is, MaTran& mt);

friend ostream& operator<<(ostream& os, MaTran& mt);

    MaTran(){
        this->hang= 0;
        this->cot= 0;
    }
   MaTran& operator+(MaTran& mtr){
        for(int i=0; i<hang; i++){
            for(int j=0; j<cot; j++){
                 *(*(matran+i)+j)-=*(*(mtr.matran+i)+j);
            }
        }
        return *this;
    }
    MaTran& operator-(MaTran &mtr){
        for(int i=0; i<hang; i++){
            for(int j=0; j<cot; j++){
                *(*(matran+i)+j)-=*(*(mtr.matran+i)+j);
            }
        }
        return *this;
    }
MaTran& operator*(MaTran &mtr){
    MaTran * mtrtich= new MaTran(hang, cot);
        for(int i=0; i<mtr.hang; i++){
            for(int j=0; j<mtr.cot; j++){
                mtrtich->matran[i][j]=0;
                for(int k=0; k<mtr.hang;k++){
                    mtrtich->matran[i][j]+=matran[i][k]*mtr.matran[k][j];
                }
            }
        }
        return *mtrtich;

    }

};
istream& operator>>(istream& is, MaTran& mt)
{
    for(int i=0; i<mt.hang; i++){
        for(int j=0;j<mt.cot; j++){
            cout<<"MT["<<i<<"]["<<j<<"]=";
            is>>*(*(mt.matran+i)+j);
        }
    }
    return is;
}
ostream& operator<<(ostream& os, MaTran& mt)
{
    cout<<"Ma tran :\n";
    for(int i=0; i<mt.hang; i++){
            cout<<"\n";
        for(int j=0;j<mt.cot; j++){
            cout<<*(*(mt.matran+i)+j)<<"\t";
        }
    }
    return os;

}

int main(){
    cout<<"Nhap ma tran 1: "<<endl;
    MaTran *mtr1= new MaTran(3,3);
    cin>>*mtr1;
    cout<<"Nhap ma tran 2: "<<endl;
    MaTran *mtr2= new MaTran(3,3);
    cin>>*mtr2;
    MaTran *mtr3= new MaTran(3,3);
    while(true){
    system("cls");
    cout<<"\n\n\t\t==========================Menu====================="<<endl;
    cout<<"1.tinh tong hai ma tran"<<endl;
    cout<<"2. tinh hieu hai ma tran"<<endl;
    cout<<"3. tinh tich hai ma tran"<<endl;
    cout<<"4. tinh thuong hai ma tran"<<endl;
    cout<<"0. exit"<<endl;
    int n;
    cout<<"Lua chon tinh toan:"; cin>>n;
    switch(n)
    {
        case 0: break;
        case 1:
            {
            cout<<"tong cua ma tran :"<<endl;
            cout<<*mtr1+*mtr2;
             system("pause");
            }
        case 2:{
            cout<<"hieu cua ma tran :"<<endl;
             cout<<*mtr1-*mtr2;
             system("pause");
        }
        case 3:
        {

            cout<<"tich cua ma tran: "<< endl;

            cout<<(*mtr1)*(*mtr2);
            system("pause");
        }
        case 4:
            {

            }
        default: continue;
    }


    }
    delete mtr1;
    delete mtr2;
    delete mtr3;
     return 0;
}
