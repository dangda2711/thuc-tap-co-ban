#include "NhanVienVanPhong.h"

NhanVienVanPhong::NhanVienVanPhong()
{
    //ctor
    m_soNgayLamViec = 0;
    m_luongCoban1Ngay = 0;
}

NhanVienVanPhong::~NhanVienVanPhong()
{
    //dtor
}

void NhanVienVanPhong::nhap()
{
    NhanVien::nhap();
    cout << "Luong co ban 1 ngay lam viec (nghin VND): ";
    cin >> m_luongCoban1Ngay;
    cout << "So ngay lam viec: ";
    cin >> m_soNgayLamViec;


}

void NhanVienVanPhong::tinhLuong()
{
    m_luong = m_luongCoban1Ngay * m_soNgayLamViec;
}
