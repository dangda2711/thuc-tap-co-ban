#include "NhanVienSanXuat.h"

NhanVienSanXuat::NhanVienSanXuat()
{
    //ctor
    m_soSanPham = 0;
    m_tienCong1SP = 0;
}

NhanVienSanXuat::~NhanVienSanXuat()
{
    //dtor
}

void NhanVienSanXuat::nhap()
{
    NhanVien::nhap();
    cout << "So san pham: ";
    cin >> m_soSanPham;
    cout << "Tien cong 1 san pham (nghin VND): ";
    cin >> m_tienCong1SP;

}

void NhanVienSanXuat::tinhLuong()
{
   m_luong = m_tienCong1SP * m_soSanPham;
}
