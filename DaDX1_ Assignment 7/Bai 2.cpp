#include<iostream>
#include<string.h>
#include<conio.h>
#include<iomanip>
using namespace std;
struct HoTen{
    string ho;
    string tendem;
    string ten;
};
struct diemthi{
    float toan, ly, hoa;
};
struct diachi{
    string xa;
    string huyen;
    string tinh;
};
class THISINH{
    HoTen hoten;
    diachi queQuan;
    string truong;
    int tuoi;
    string soBaoDanh;
    diemthi diemThi;
public:

    void nhap(){
        while (getchar() != '\n');
        cout<<"Ho va ten:";
        cout<<"\n\tHo: ";getline(cin, hoten.ho);
        cout<<"\tTen dem:" ;getline(cin, hoten.tendem);
        cout<<"\tTen : ";getline(cin,hoten.ten);
        cout<<"Dia chi xa, huyen , tinh: \n";
        cout<<"\tXa:"; getline(cin,queQuan.xa);
        cout<<"\tHuyen :";getline(cin,queQuan.huyen);
        cout<<"\tTinh: ";getline(cin,queQuan.tinh);
        cout<<"Truong: "; getline(cin, truong);

        cout<<"Tuoi: "; cin>>tuoi;
        while(getchar()!='\n');
        cout<<"So Bao danh: ";
        getline(cin, soBaoDanh);
        cout<<"Nhap diem 3 mon Toan, Ly, Hoa: ";
        cin>>diemThi.toan;
        cin>>diemThi.ly;
        cin>>diemThi.hoa;
    }
    void xuat(){
        cout<<"Ho va ten:"<<hoten.ho<<" "<<hoten.tendem<<" "<<hoten.ten<<endl;
        cout<<"Dia chi: xa, huyen , tinh :"<<queQuan.xa<<", "<<queQuan.huyen<<", "<<queQuan.tinh<<endl;
        cout<<"Truong: "<< truong<<endl;
        cout<<"Tuoi: "<<tuoi<<endl;
        cout<<"So Bao danh: "<<soBaoDanh<<endl;
        cout<<"Nhap diem 3 môn Toan, Ly, Hoa: "<<diemThi.toan<<diemThi.ly<<diemThi.hoa;
        }
    void xuatBang(){
       cout<<setw(10)<<hoten.ho<<setw(10)<<hoten.tendem<<setw(10)<<hoten.ten<<setw(15)
       <<queQuan.xa<<setw(15)<<queQuan.huyen<<setw(15)<<queQuan.tinh
       <<setw(20)<<soBaoDanh<<setw(5)<<diemThi.toan<<setw(5)<<diemThi.ly<<setw(5)<<diemThi.hoa<<endl;
    }
    float tongDiem(){
    return (diemThi.toan+diemThi.hoa+diemThi.ly);
    }
};
int IMax(THISINH *arr, int n)
{
    int imax=0;
    for(int i=0; i<n; i++){

        if((*(arr+imax)).tongDiem()<(*(arr+i)).tongDiem()){
            imax=i;
        }
    }
    return imax;
}
void swap(THISINH &a, THISINH &b){
    THISINH temp= a;
    a=b;
    b=temp;
}
void sapXepMang(THISINH* ds, int n){
    for(int i=0; i<n; i++){
        for(int j=n-1; j>i; j--){
            if((*(ds+j)).tongDiem()>(*(ds+(j-1))).tongDiem())
               swap((*(ds+j)), (*(ds+(j-1))));
        }
    }

}
int main(){

    int n;
    cout<<"nhap so thi sinh: ";
    cin>>n;
    THISINH dsthisinh[n];
    for(int i=0; i<n; i++)
    {
        THISINH thiSinh;
        thiSinh.nhap();
        *(dsthisinh+i)=thiSinh;
    }
    sapXepMang(dsthisinh, n);
    cout<<setw(10)<<"ho"<<setw(10)<<"tendem"<<setw(10)<<"ten"<<setw(15)
       <<"xa"<<setw(15)<<"huyen"<<setw(15)<<"tinh"
       <<setw(20)<<"soBaoDanh"<<setw(5)<<"toan"<<setw(5)<<"ly"<<setw(5)<<"hoa"<<endl;
    cout<<"-------------------------------------------------------------------------------------------------------------"<<endl;
    for(int i=0; i<n; i++){
            (*(dsthisinh+i)).xuatBang();
    }

    return 0;
}
