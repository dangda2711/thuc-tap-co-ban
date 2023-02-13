#include <iostream>
#include "Congty.h"
#include "CongtyVector.h"

using namespace std;
//#define USING_VECTOR

int main()
{
#ifdef USING_VECTOR
    CongtyVector ctyPhanMem;
#else
    Congty ctyPhanMem;
#endif
    ctyPhanMem.nhap();
    ctyPhanMem.tinhLuong();
    ctyPhanMem.xuat();
    return 0;
}
