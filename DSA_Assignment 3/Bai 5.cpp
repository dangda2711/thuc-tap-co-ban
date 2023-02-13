#include<iostream>
using namespace std;
void nhapMang(int * arr, int  &n)
{
    for(int i=0; i<n; i++){
        cout<<"arr["<<i<<"]= ";
        cin>>*(arr+i);
    }
}
int timGiaTriLonThuHai(int *arr, int n)
{
    int max_1= *(arr);
    for(int i=0; i<n; i++){
        if(max_1< *(arr+i)){
            max_1= *(arr+i);
        }
    }
    int max_2= *(arr);
    for(int i=0; i<n; i++){
        if((max_2< *(arr+i))&& (*(arr+i)<max_1)){
            max_2= *(arr+i);
        }

    }
    return max_2;
}
int main()
{
    int n;
    cout<<"Nhap gia tri n: ";
    cin>>n;
    int * arr1= new int[n];
    nhapMang(arr1, n);
    cout<<"gia tri mang thu 2: "<<timGiaTriLonThuHai(arr1, n)<<endl;
    return 0;
}
