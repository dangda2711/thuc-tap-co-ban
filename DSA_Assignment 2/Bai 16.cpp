#include<iostream>
using namespace std;
// Bài 16;
void cacUS(int n)
{
    cout<<"Cac uoc so cua "<<n<<" la: ";
    for(int i=1; i<n; i++){
        if(n%i==0)
            cout<<"\t"<<i;
    }
}
// Bài 17;
int tongUS(int n)
{
    int M=0;
    for(int i=1; i<n; i++){
        if(n%i==0)
            M+=i;
    }
    return M;
}
int main(){
    int n;
    cout<<"Nhap gia tri n : ";
    cin>>n;
    cacUS(n);
    cout<<"\nTong cua cac uoc so "<<tongUS(n)<<endl;
}

