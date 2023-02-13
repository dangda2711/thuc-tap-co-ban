#include<iostream>
using namespace std;

int main()
{
 int x = 10;
 int *ptr = &x;
 int *&ptr1 = ptr;
}
// kết quả
//Lỗi phải đổi * và &
//chạy : ptr1 là nickname của ptr
