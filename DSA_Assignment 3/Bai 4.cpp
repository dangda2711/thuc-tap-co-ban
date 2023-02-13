#include<iostream>
using namespace std;
void nhapMang(int * arr, int  &n)
{
    for(int i=0; i<n; i++){
        cout<<"arr["<<i<<"]= ";
        cin>>*(arr+i);
    }
}
void xoaPhanTu(int * arr, int& n, int k)
{
    for(int i= k;i<n; i++ ){
        *(arr+i)= *(arr+(i+1));
    }
    n--;
}
void xoaMangNhoHon(int* arr, int&n , int x)
{
    int i=0;
    while(i!=n){
        if(*(arr+i)<x)
            xoaPhanTu(arr, n, i);
        i++;
    }
}
void xuat(int* arr, int &n)
{
    for(int i=0; i<n; i++){
        cout<<"\t"<<*(arr+i);
    }
}
int main()
{
    int n;
    cout<<"nhap so phan tu la: ";
    cin>>n;
    int *arr1= new int[n];
    nhapMang(arr1, n);
    int x;
    cout<<"nhap gia tri x: ";
    cin>>x;
    xoaMangNhoHon(arr1, n, x);
    //xoaPhanTu(arr1, n, x);
    cout<<n;
    xuat(arr1, n);
    return 0;
}
