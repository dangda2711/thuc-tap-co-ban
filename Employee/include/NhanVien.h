#ifndef NHANVIEN_H
#define NHANVIEN_H
#include <iostream>
using namespace std;


class NhanVien
{
public:
    NhanVien();
    virtual ~NhanVien();
    virtual void nhap();
    void xuat();
    virtual void tinhLuong() = 0;

protected:
    double m_luong;

private:
    string m_ten;
};

#endif // NHANVIEN_H
