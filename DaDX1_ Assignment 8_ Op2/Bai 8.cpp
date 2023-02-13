#include<iostream>
using namespace std;
#include<string.h>
#include<vector>
#include<iomanip>
class employee
{
protected:
    string m_name;

public:
    employee()
    {
        this->m_name= "";
    }
    employee(string name)
    {
        this->m_name= name;
    }
    virtual void nhap(){
         while(getchar()!='\n');
        cout<<"Nhap ten nhan vien:";
        getline(cin, m_name);
    }
    virtual double getCoin(){return 0.0;}
    virtual void setCoin(double c){}
    virtual void xuat(){}
    string getName(){return m_name;}
    virtual const string levels(){return "level0.0";}
    virtual double coins(){return 0.0;}
};
class dev1: public employee{
    string account;
    string level;
    double coin;
public:
    dev1():employee(){
        this->account="";
       this->level="";
        this->coin= 0.0;
    }
    dev1(string acc, string name, string lv, double coin ):employee(name){
        this->account= acc;
        this->level=lv;
        this->coin= coin;
    }
    void nhap()
    {
        employee::nhap();
        cout<<"Nhap acc:";
        getline(cin, account);
        cout<<"Nhap level:";
        getline(cin, level);
        cout<<"nhap so coin";
        cin>>coin;
    }
    double getCoin()
    {
        return this->coin;
    }
    void xuat()
    {
        cout<<setw(10)<<account<<setw(30)<<m_name<<setw(10)<<level<<setw(15)<<coin<<endl;

    }
    double coins()
    {
        return double(coin/2*1000000);
    }
    const string levels(){return level;}

};



class dev2: public employee{
    string account;
    string level;
    double coin;
public:
 dev2():employee(){
        this->account="";
       this->level="";
        this->coin= 0.0;
    }
    dev2(string acc, string name, string lv, double coin ):employee(name){
        this->account= acc;
        this->level=lv;
        this->coin= coin;
    }
    void nhap()
    {
        employee::nhap();
        cout<<"Nhap acc:";
        getline(cin, account);
        cout<<"Nhap level:";
        getline(cin, level);
        cout<<"nhap so coin";
        cin>>coin;
    }
    void xuat()
    {
        cout<<setw(10)<<account<<setw(30)<<m_name<<setw(10)<<level<<setw(15)<<coin<<endl;

    }
    double getCoin()
    {
        return this->coin;
    }
    double coins()
    {
        return double(coin*1000000);
    }
    const string levels(){return level;}
};

class projectManager: public employee{
    string account;
    string level;
    double coin;
public:
    projectManager():employee(){
        this->account="";
       this->level="";
        this->coin= 0.0;
    }
    projectManager(string acc, string name, string lv, double coin ):employee(name){
        this->account= acc;
        this->level=lv;
        this->coin= coin;
    }
    void nhap()
    {
        employee::nhap();
        cout<<"Nhap acc:";
        getline(cin, account);
        cout<<"Nhap level:";
        getline(cin, level);
    }
    void xuat()
    {
        cout<<setw(10)<<account<<setw(30)<<m_name<<setw(10)<<level<<setw(15)<<coin<<endl;

    }
    void setCoin(double c){
        this->coin= c;
    }
    double coins()
    {
        return double(coin*1000000);
    }
    const string levels(){return level;}
};
void manager()
{
    employee **danhSachNhanVien;
   danhSachNhanVien = new employee*[10];
   static int i=0;
    while(true){
        system("cls");
        cout<<"\n\n\t\t================Quan li du an code===================="<<endl;
        cout<<"\t1. Nhap nhan vien dev1"<<endl;
        cout<<"\t2. Nhap nhan vien dev2"<<endl;
        cout<<"\t3. Nhap quan li du an"<<endl;
        cout<<"\t4. Xuat thong tin cua nhan vien dev va quan li"<<endl;
        cout<<"\t0.exit"<<endl;
        cout<<"=============================================================="<<endl;
        int luachon;
        employee *nv;
        employee *manager;
        cout<<"Lua chon : ";
        cin>>luachon;
        switch( luachon){
            case 0:{break;}
            case 1:
                {
                    nv= new dev1;
                    cout<<"\n\t===============NHAP THONG TIN NHAN VIEN============"<<endl;
                    nv->nhap();
                    *(danhSachNhanVien+i)=nv;
                    i++;
                    break;
                }
              case 2:
                {
                    nv= new dev2;
                  cout<<"\n\t===============NHAP THONG TIN NHAN VIEN============"<<endl;
                    nv->nhap();
                    *(danhSachNhanVien+i)=nv;
                    i++;
                    break;
                }
                case 3:
                {
                    manager = new projectManager;
                   cout<<"\n\t===============NHAP THONG TIN NHAN VIEN============"<<endl;
                    manager->nhap();
                    break;
                }
                case 4:{
                    double coinManager=0;
                    cout<<"\n\n\t\t==================THONG TIN CUA TAT CA CAC DEV VA PROJECTMANAGER========================"<<endl;
                    cout<<setw(10)<<"account"<<setw(30)<<"name"<<setw(10)<<"level"<<setw(15)<<"coin"<<endl;
                    for(int j=0; j<i; j++)
                    {
                        (*(danhSachNhanVien+j))->xuat();
                        coinManager+=((*(danhSachNhanVien+j))->getCoin())/4;
                    }
                    manager->setCoin(coinManager);
                    manager->xuat();

                    system("pause");
                }


        }
    }
}
int main(){
   manager();

return 0;
}
