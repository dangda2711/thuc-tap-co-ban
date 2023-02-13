#include<iostream>
using namespace std;

int fun(int &x)
{
 return x;
}
int main()
{
int a= 10;
 cout << fun(a);// loi &x la ten biet danh
 return 0;
}
//ket qua 10
