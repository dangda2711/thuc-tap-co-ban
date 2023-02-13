#include<iostream>
using namespace std;
float Tong(float a, float b) {return a+b;}
float Hieu(float a, float b) {return a-b;}
float Tich(float a, float b) {return a*b;}
float Thuong(float a, float b) {return a/b;}
float MAX(float a,float b) {return (a>b)?a:b;}
float MIN(float a,float b) {return (a<b)?a:b;}
#define Tong 0x0001//: cộng
 #define Hieu 0x0002//: trừ
 #define Tich 0x0004//: nhân
 #define Thuong 0x0008//: chia
 #define MAX 0x0010//: số lớn
 #define MIN 0x0020//: số bé
void Calculator(uint MathType, float num1, float num2)
 {
 }
int main(){
    float a, b;
    cout<<"nhap a:"; cin>>a;
    cout<<"nhap b:"; cin>>b;
    calculator(Tong|Hieu, a, b);
return 0;}
