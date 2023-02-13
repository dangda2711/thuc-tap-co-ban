#ifndef NHANVIENSANXUAT_H
#define NHANVIENSANXUAT_H

#include "NhanVien.h"


class NhanVienSanXuat : public NhanVien
{
    public:
        NhanVienSanXuat();
        virtual ~NhanVienSanXuat();
        void nhap();
        void tinhLuong();

    protected:

    private:
        unsigned int m_soSanPham;
        double m_tienCong1SP;
};

#endif // NHANVIENSANXUAT_H
