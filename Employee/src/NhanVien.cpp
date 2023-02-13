#include "NhanVien.h"

NhanVien::NhanVien()
{
    //ctor
    m_ten = "";
    m_luong = 0;
}

NhanVien::~NhanVien()
{
    //dtor
}

void NhanVien::nhap()
{
    cout << "Ho ten: ";
    cin.ignore();
    getline(cin, m_ten);
}

void NhanVien::xuat()
{
    cout << "Ho ten: " << m_ten << ", luong: " << m_luong << " (nghin VND)" << endl;
}
