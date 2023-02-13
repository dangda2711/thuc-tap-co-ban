#include<iostream>
using namespace std;
int main(){
    int tien;
    cout<<"Nhap vao so tien: "<<endl;
    cin>>tien;
    int i=0;
    while(tien>100)
    {
        tien-=100;
        i++;
    }

    cout<<"100 so luong: "<<i<<endl;
    i=0;
    while(tien>20){
        tien-=20;
        i++;
    }

    cout<<"20 so luong: "<<i<<endl;
         i=0;
    while(tien>5){
        tien-=5;
        i++;
    }
    cout<<"5 so luong"<<i<<endl;
    i=0;
    while(tien>0){
        tien-=5;
        i++;
    }
    cout<<"1 so luong"<<i<<endl;

}
