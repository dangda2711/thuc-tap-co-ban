#include<iostream>
using namespace std;

//1. Hàm bất kỳ sử dụng try, catch, throw

void chiaSo(int a, int b){
try
    {
    if(b==0) throw "khong the chia cho 0";
    else
        cout<<(float)a/b;
    }
 catch(const char* c)
 {
     cout<<"Error:"<<c<<endl;
 }
 }
 //2. Hàm bất kỳ sử dụng Multiple catch blocks

 void chiaSo1(int a, int b){
 try
 {
     int c;
     if(b==0) throw "khong the chia cho 0";
     else{
         c = a/b;
         throw c;
     }
 }
 catch(int i)
 {
     cout<<"a/b= "<<i<<endl;
 }
 catch( const char* c)
 {
     cout<<c<<endl;
 }
 }
 //3. Hàm bất kỳ sử dụng nested exception


void chiaSo2(int a, int b){
 try
 {
 try
 {
     int c;
     if(b==0) throw "khong the chia cho 0";
     else throw (c=a/b);
 }
 catch(const char* a )
 {
     cout<<a;throw;
 }
 catch(int n)
 {
     cout<<"a/b="<<n<<endl;
 }
 }
 catch(const char* a)
 {
 cout<<"Lỗi!"<<endl;
 }
}
int main()
{
    int a, b;
    cout<<"nhap a";cin>>a;
    cout<<"nhap b"; cin>>b;
   chiaSo2(a,b);
    //chiaSo1(a, b);
    // chisSo(a,b);
 return 0;
}
