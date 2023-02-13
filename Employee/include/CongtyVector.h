#ifndef CONGTYVECTOR_H
#define CONGTYVECTOR_HCONGTYVECTOR_H
#include <iostream>
#include <vector>
#include "NhanVien.h"
using namespace std;

class CongtyVector
{
public:
    CongtyVector();
    virtual ~CongtyVector();
    void nhap();
    void tinhLuong();
    void xuat() const;

protected:

private:
    vector<NhanVien*> m_danhSachNhanVien;
};

#endif // CONGTYVECTOR_H
