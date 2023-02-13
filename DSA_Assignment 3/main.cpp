#include <iostream>
#include<cstring>
#include<iomanip>
using namespace std;

struct CanBo
{
    char ten[25];
    float luong;
};
void nhap(CanBo* cb)
{
    while(getchar()!='\n');
    cout<<"ten can bo: ";
    cin.getline(cb->ten, 25);
    cout<<"luong: ";
    cin>>cb->luong;

}
void Swap(CanBo* &a, CanBo* &b)
{
    CanBo* temp= a;
    a=b;
    b= temp;
}
void sapXepMang(CanBo** cb, int n)
{

    for(int i=0; i<n-1; i++){
        for(int j=n-1; j>i; j--){
            if((*(cb+j))->luong<(*(cb+(j-1)))->luong)
                Swap(*(cb+j), *(cb+(j-1)));
        }
    }
}
int main()
{
    CanBo **dsCanBo= new CanBo*[15];
   int n= 15;
    for(int i=0; i<15; i++){
        CanBo * cb= new CanBo;
        nhap(cb);
        *(dsCanBo+i)= cb;
    }
    sapXepMang(dsCanBo, n);
    cout<<"\n\n\t\t DANH SACH 3 CAN BO CO LUONG THAP NHAT";
    cout<<setw(25)<<"Ten"<<setw(10)<<"Luong"<<endl;
    for(int i=0; i<3; i++){
        cout<<setw(25)<<(*(dsCanBo+i))->ten<<setw(10)<<(*(dsCanBo+i))->luong<<endl;
    }
    return 0;
}
