#include<iostream>
#include<cstring>
using namespace std;
class Phone
{
private:
    string ten;
    string password;
public:
    Phone(string ten, string password)
    {
        this->ten= ten;
        this->password= password;
    }
    Phone()
    {
        this->ten= "";
        this->password= "";
    }
    ~Phone(){}
    virtual void loginByPassWord()
    {
        string pw;
        cout<<"Nhap nhap password: ";
        cin>>pw;
        if(password== pw){
            cout<<"nhap thanh cong"<<endl;
        }
        else
            cout<<"dang nhap khong thanh cong"<<endl;
    }


};
int main(){
    return 0;
}
