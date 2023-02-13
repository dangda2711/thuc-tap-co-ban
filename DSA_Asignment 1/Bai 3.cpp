#include<iostream>
using namespace std;
int UCLN(int a, int b) {
    if(a==b)
        return a;
    else if(a>b)
        return UCLN(a-b,b);
    else
        return UCLN(a,b-a);
}
int BCNN(int a, int b)
{
    if(a==b)
        return a;
    else
        return a*b/UCLN(a, b);
}
int main()
{
    while(true){
    int a, b;
    cout<<"a= ";
    cin>>a;
    cout<<"b= ";
    cin>>b;
    if(a<=0||b<=0)
        continue;
    cout<<"Uoc chung lon nhat cua a, b la: "<<UCLN(a, b)<<endl;
    cout<<"Boi chung nho nhat cua a va b la: "<<BCNN(a, b)<<endl;
    return 0;
    }
}
