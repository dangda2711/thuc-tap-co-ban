#include<iostream>
using namespace std;
void nhapMang(int * arr, int  n)
{
    for(int i=0; i<n; i++){
        cout<<"arr["<<i<<"]= ";
        cin>>*(arr+i);
    }
}
int main()
{
    int n;
    cout<<"nhap so phan tu la: ";
    cin>>n;
    int *arr1= new int[n];
    int *arr2= new int[n];
    while(true)
    {
        system("cls");
        cout<<"\n\n\t\t=======================MENU======================"<<endl;
        cout<<"\t1. Nhap 2 mang "<<endl;
        cout<<"\t2. Tong cua 2 mang"<<endl;
        cout<<"\t3. Tru cua 2 mang"<<endl;
        cout<<"\t4. thoat chuong trinh"<<endl;

        int luachon;
        cout<<"Nhap lua chon cua minh: ";
        cin>>luachon;
        switch(luachon)
        {
        case 1:
            {
                cout<<"Nhap mang arr1: "<<endl;
                nhapMang(arr1, n);
                cout<<"Nhap mang arr1: "<<endl;
                nhapMang(arr2, n);
                 break;
            }
        case 2:
            {
                int *arr3= new int[n];
                for(int i=0; i<n; i++){
                    *(arr3+i)= *(arr1+i)+*(arr2+i);
                }

                cout<<"arr1 +arr2 = ";
                for(int i=0; i<n; i++){
                    cout<<"\t"<<*(arr3+i);
                }
                system("pause");
                break;
            }
            case 3:
            {
                int *arr3= new int[n];
                for(int i=0; i<n; i++){
                    *(arr3+i)= *(arr1+i)-*(arr2+i);
                }

                cout<<"arr1 -arr2 = ";
                for(int i=0; i<n; i++){
                    cout<<"\t"<<*(arr3+i);
                }
                system("pause ");
                 break;

            }
            case 4:
                {
                    char k;
                    cout<<"nhap k hoac K de ket thuc : ";
                    cin>>k;
                    if(k=='k'||k== 'K')
                        exit(0);
                    break;
                }
        }
    }
    return 0;
}
