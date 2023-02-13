#include<iostream>
using namespace std;
int main(){
    int n, du, sum=0, bienTam;
     cout<<"Nhap so can kiem tra:";
     cin>>n;
     bienTam= n;
     while(n>0){
        du=n%10;
        sum= (10*sum)+du;
        n=n/10;
     }
     if(bienTam== sum){
        cout<<bienTam<<" la so  palindrome "<<endl;
     }
     else
        cout<<bienTam<<" khong la so  palindrome "<<endl;
     return 0;
}
