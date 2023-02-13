#include "Congty.h"
#include "NhanVienSanXuat.h"
#include "NhanVienVanPhong.h"

Congty::Congty()
{
    m_danhSachNhanVien = nullptr;
    m_soNhanVien = 0;
}

Congty::~Congty()
{
    //dtor
    for(int i = 0; i < m_soNhanVien; i++)
    {
        delete[] *(m_danhSachNhanVien + i);
    }
    delete[] m_danhSachNhanVien;
}

void Congty:: nhap()
{
    cout << "Nhap so nhan vien: ";
    cin >> m_soNhanVien;
    m_danhSachNhanVien = new NhanVien*[m_soNhanVien];

    for (int i = 0; i < m_soNhanVien; i++)
    {
        cout << "Nhan vien van phong (1), nhan vien san xuat (other): ";
        int option;
        cin >> option;
        NhanVien *nv;
        if (1 == option)
        {
            nv = new NhanVienVanPhong;
        }
        else
        {
            nv = new NhanVienSanXuat;
        }

        nv->nhap();
        *(m_danhSachNhanVien + i) = nv;

    }

}

void Congty:: tinhLuong()
{
    for(int i = 0; i < m_soNhanVien; i++)
    {
        (*(m_danhSachNhanVien + i))->tinhLuong();
    }
}

void Congty:: xuat() const
{
    cout << "==============================================================" << endl;

    for(int i = 0; i < m_soNhanVien; i++)
    {
        (*(m_danhSachNhanVien + i))->xuat();
    }

    cout << "==============================================================" << endl;
}
