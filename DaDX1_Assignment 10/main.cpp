#include <iostream>
#include "test.h"
using namespace std;

////BAI 2
#define MY_DEFINE
// khi không có #define MY_DEFINE thì chương trình hiện là khong dung define
// sau khi có #define MY_DEFINE thì chương trình hiển thị là khong dung define

////BAI 3
#define tong(a, b) cout<<"tong cua a va b la: "<<a+b<<endl;
#define hieu(a, b) cout<<"tru cua a va b la: "<<a-b<<endl;
#define tich(a, b) cout<<"nhan cua a va b la: "<<a*b<<endl;
#define thuong(a, b) cout<<"chia cua a va b la: "<<a/b<<endl;
#define input(a, b) cout<<"Nhap gia tri a:"; \
cin>>a;\
cout<<"\nNhap gia tri b:"; \
cin>>b;
#define output(n) (cout<<n<<endl;)
int main()
{
    //cout << MY_STRING<< endl;
    float a, b;
    input(a, b);
    cout<<"\n";
    tong(a,b);
    hieu(a,b);
    tich(a,b);
    thuong(a,b);
    return 0;
}
