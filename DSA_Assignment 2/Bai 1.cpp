#include <iostream>

using namespace std;
//Bai 1;
double bai1(double n)
{
    double tong= 0;
    for(int i=1; i<=n; i++){
        tong+= i;
    }
    return tong;
}
// Bài 2;
double bai2(int n)
{
    double tong=0;
    for(int i=1; i<= n;i++){
        tong+= i*i;
    }
    return tong;
}
//Bài 3;
double bai3(int n)
{
    double tong=0;
    for(int i=1;i<=n; i++){
        tong+= (double)1/i;
    }
    return tong;
}
// Bài 4;
double bai4(int n)
{
    double tong=0;
    for(int i=1;i<=n;i++){
        tong+=(double)1/(2*i);
    }
    return tong;
}
// Bài 5;
double bai5(int n)
{
    double tong=0;
    for(int i=0;i<=n;i++){
        tong+=(double)1/(2*i+1);
    }
    return tong;
}
// Bài 6;
double bai6(int n)
{
    double tong=0;
    for(int i=1;i<=n;i++){
        tong+=(double)1/(i*(i+1));
    }
    return tong;
}
// Bài 7;
double bai7(int n)
{
    double tong=0;
    for(int i=1;i<=n;i++){
        tong+=(double)i/(i+1);
    }
    return tong;
}
// Bài 8;
double bai8(int n)
{
    double tong=0;
    for(int i=0;i<=n;i++){
        tong+=(double)(2*i+1)/(2*i+2);
    }
    return tong;
}
// Bài 9;
double bai9(int m)
{
    double giaiThua=1;
    for(int i=2;i<=2*m;i++){
        giaiThua*=i;
    }
    return giaiThua;
}
// Bài 10;
double bai10(int x,int m)
{
    double T=1;
    for(int i=1;i<=m;i++){
        T*=x;
    }
    return T;
}
double gthua(int m)
{
    double giaiThua=1;
    for(int i=2;i<=m;i++){
        giaiThua*=i;
    }
    return giaiThua;
}
// Bài11;
double bai11(int m)
{
    double tong=1;
    for(int i=2;i<=2*m;i++){
        tong+=gthua(i);
    }
    return tong;
}
double Pow(int x, int n)
{
    double M=1;
    for(int i=0; i<n; i++){
        M*=x;
    }
    return M;
}
// Bài 12;
double bai12(int x,int m)
{
    double tong=0;
    for(int i=1;i<=m;i++){
        tong+=Pow(x, i);
    }
    return tong;
}
// Bài 13;
double bai13(int x,int m)
{
    double tong=0;
    for(int i=1;i<=m;i++){
        tong+=Pow(x, 2*i);
    }
    return tong;
}
// Bài 14;
double bai14(int x,int m)
{
    double tong=0;
    for(int i=1;i<=m;i++){
        tong+=Pow(x, 2*i-1);
    }
    return tong;
}
int main()
{
    int n= 15;
    cout<<bai3(n);
    return 0;
}

