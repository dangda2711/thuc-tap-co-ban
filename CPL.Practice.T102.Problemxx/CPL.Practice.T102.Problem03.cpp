#include<iostream>
using namespace std;
bool friendNumber(int a, int b)
{
    int tongUocA= 0;
    int tongUocB= 0;
    //tính tông các ước a
    for(int i=1; i<=(a+1)/2; i++){
        if(a%i==0){
            tongUocA+=i;
        }
    }
    //tính tông các ước a

    for(int i=1; i<=(b+1)/2; i++){
        if(b%i==0){
            tongUocB+=i;
        }
    }
    // xét điều kiện là bạn
    if(tongUocA==b&&tongUocB==a){
        return true;
    }
    else
        return false;

}
int main(){

int a;
int b;
// nhap gia tri a va b sao cho 1<=a,b<=10000
while(true){
cout<<"Nhap a: ";
cin>>a;
if(a>=1&&a<=10000)
    break;
else{
    cout<<"Nhap lai gia tri a"<<endl;
    continue;
}
}
while(true){
cout<<"Nhap b: ";
cin>>b;
if(b>=1&&b<=10000)
    break;
else{
    cout<<"Nhap lai gia tri b"<<endl;
    continue;
}
}
//In ra a va b có phải la bạn không
if(friendNumber(a, b))
    cout<<"a va b la ban"<<endl;
else
    cout<<"a va b khong la ban";
return 0;}
