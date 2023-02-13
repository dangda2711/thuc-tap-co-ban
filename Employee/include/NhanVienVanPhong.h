#ifndef NHANVIENVANPHONG_H
#define NHANVIENVANPHONG_H

#include "NhanVien.h"


class NhanVienVanPhong : public NhanVien
{
    public:
        NhanVienVanPhong();
        virtual ~NhanVienVanPhong();
        void nhap();
        void tinhLuong();

    protected:

    private:
        unsigned int m_soNgayLamViec;
        double m_luongCoban1Ngay;
};

#endif // NHANVIENVANPHONG_H
