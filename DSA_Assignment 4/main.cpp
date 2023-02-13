#include <iostream>

using namespace std;
unsigned int sumDigit(unsigned int n)
{
    unsigned int sum=0;
    while (n>0){
        int i=n%10;
        sum+=i;
        n= n/10;
    }
    return sum;
}
unsigned int reverses(unsigned int n)
{
    unsigned int rev=0;
    while (n>0){
        unsigned int i=n%10;
        rev=10*rev+i;
        n= n/10;
    }
    return rev;
}
bool  isPerfect( unsigned int n)
{
    int sum=0;
    for(int i=1; i<(n/2+1); i++){
        if(n%i==0){
            sum+=i;
        }
    }
    if(sum==n){
        return true;
    }
    return false;
}
bool isPrime(unsigned int n)
{
    int dem=0;
    for(int i=1; i<=n; i++){
        if(n%i==0)
            dem++;
    }
    if(dem==2)
        return true;
    else
        return false;
}
void phanTichThuaSoNguyenTo(unsigned int n)
{
    for(int i=2; i<n; i++){
            int dem=0;
        if(isPrime(i)){
            while(n%i==0){
                dem++;
                n/=i;
            }
            if(dem==0){continue;}
            else if(dem==1){cout<<i<<"*";}
            else {cout<<i<<"^"<<dem<<"*";}
        }
        else
            continue;
    }
}
int main()
{
    unsigned int n;
    cout << "Nhap so nguyen duong: " ;
    cin>>n;
    cout<<"==============================================================="<<endl;

    cout<<"so dao nguoc : "<<reverses(n)<<endl;;
    cout<<"==============================================================="<<endl;

    if(isPerfect(n)==true)
        cout<<" so "<<n <<" la hoan hao"<<endl;
    else
        cout<<"so "<<n <<" khong phai so hoan hao"<<endl;
    cout<<"==============================================================="<<endl;
    if(isPrime(n))
        cout<<" so "<<n <<" la so nguyen to"<<endl;
    else
        cout<<"so "<<n <<" khong phai so nguyen to"<<endl;
    cout<<"==============================================================="<<endl;
    cout<<"Cac thua so duoc phan tich : "; phanTichThuaSoNguyenTo(n);
    return 0;
}
