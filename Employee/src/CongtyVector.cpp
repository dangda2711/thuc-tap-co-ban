#include "CongtyVector.h"
#include "NhanVienSanXuat.h"
#include "NhanVienVanPhong.h"

CongtyVector::CongtyVector()
{
    //ctor
    m_danhSachNhanVien.clear();
}

CongtyVector::~CongtyVector()
{
    //dtor
    for(int i = 0; i < m_danhSachNhanVien.size(); i++)
    {
        if(m_danhSachNhanVien[i] != nullptr)
        {
            delete m_danhSachNhanVien[i];
            m_danhSachNhanVien[i] = nullptr;
        }
    }

    m_danhSachNhanVien.clear();
}

void CongtyVector:: nhap()
{
    cout << "Nhap so nhan vien: ";
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
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
        m_danhSachNhanVien.push_back(nv);
    }

}

void CongtyVector:: tinhLuong()
{
    for(int i = 0; i < m_danhSachNhanVien.size(); i++)
    {
        m_danhSachNhanVien[i]->tinhLuong();
    }
}

void CongtyVector:: xuat() const
{
    cout << "==============================================================" << endl;

    for(int i = 0; i < m_danhSachNhanVien.size(); i++)
    {
        m_danhSachNhanVien[i]->xuat();
    }

    cout << "==============================================================" << endl;
}
