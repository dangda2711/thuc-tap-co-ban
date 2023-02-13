#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    double S, P, T;
   cout<<"Nhap tien gui vao: ";
   cin>> S;
   cout<<"Nhap lai suat co ki han 1 nam: ";
   cin>>P;
   cout<<"Nhap so tien can: ";
   cin>>T;
   double nam= log(T/S)/log(1+P/100);
   int i= nam/1; // sô nguyên của nam
   int lamtron= int(nam);// lam tron xuong
   if(nam>i){lamtron++;}
   cout<<"So thoi gian can gui la"<<lamtron;
   return 0;
}
