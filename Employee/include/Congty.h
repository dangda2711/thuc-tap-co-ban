#ifndef CONGTY_H
#define CONGTY_H
#include <iostream>
#include "NhanVien.h"
using namespace std;

class Congty
{
public:
    Congty();
    virtual ~Congty();
    void nhap();
    void tinhLuong();
    void xuat() const;

protected:

private:
    NhanVien **m_danhSachNhanVien;
    unsigned int m_soNhanVien;
};

#endif // CONGTY_H
