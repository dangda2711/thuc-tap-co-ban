#include<iostream>
using namespace std;
int P(int n)
{
    if(n==1||n==2)
        return 1;
    else
        return n*P(n-1)+n*P(n-2);
}
int main()
{
    int n;
    while(true)
    {
    system("cls ");
    cout<<"Nhap gia tri n nguyen duong";
    cin>>n;
    if(n<=0){ continue; }
    else{ break;}

    }
    cout<<"P = "<<P(n);
    return 0;
}
