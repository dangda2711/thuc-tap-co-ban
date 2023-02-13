#include <iostream>
#include<string.h>
using namespace std;


class hanghoa
{
public:
    string mahang;
    string tenhang;
    string donvitinh;
    float dongia,soluong;
    float thanhtien(){
        return dongia*soluong;
    }
    hanghoa(string mh, string ten, string donvi, float dongia, float soluong){
        this->mahang=mh;
        this->tenhang= ten;
        this->donvitinh= donvi;
        this->dongia= dongia;
        this->soluong= soluong;
    }
    hanghoa(){
        this->mahang="";
        this->tenhang= "";
        this->donvitinh= "";
        this->dongia= 0;
        this->soluong= 0;
    }
    void nhap()
    {
        //while (getchar()!= '\n');
    cout<<"Nhap ma hang : ";getline(cin,mahang);
    cout<<"Nhap ten hang : ";getline(cin,tenhang);
    cout<<"Nhap don vi tinh : ";getline(cin,donvitinh);
    cout<<"Nhap don gia : ";cin>>dongia;
    cout<<"Nhap so luong : ";cin>>soluong;

}


};
class hangvanchuyen: public hanghoa{
public:
    float dongiavanchuyen;
    hangvanchuyen():hanghoa(){

        this->dongiavanchuyen= 0;
    }
    hangvanchuyen(string mh, string ten, string donvi, float dongia, float soluong, float dongiavc)
    :hanghoa(mh, ten, donvi, dongia, soluong){
    this->dongiavanchuyen= dongiavc;
    }
    void nhap(){
        hanghoa::nhap();
        cout<<"nhap don gia van chuyen"; cin>>dongiavanchuyen;
    }
    float congvanchuyen(){
        return soluong*dongiavanchuyen;
    }
    void xuat(){
        cout<<"soluong"<<soluong<<endl;
    }
};

int main()
{
    hangvanchuyen* hang = new hangvanchuyen();
    hang->nhap();
    cout<<"============================================================"<<endl;
    cout<<"tinh thanh tien hang hoa: "<<hang->thanhtien()<<endl;
    cout<<"tinh cong van chuyen: "<<hang->congvanchuyen()<<endl;
    cout<<"Tong tien hang va cong van chuyen hang: "<<float(hang->thanhtien()+hang->congvanchuyen())<<endl;
    return 0;
}
