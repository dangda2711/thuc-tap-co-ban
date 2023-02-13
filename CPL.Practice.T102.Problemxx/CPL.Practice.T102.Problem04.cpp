#include<iostream>
#include<string>
using namespace std;
//Task 01: Tạo ra class Employee , xây dựng các phương thức tạo mặc định tạo có tham số , hàm nhập ảo, và hàm in
class Employee
{
protected:
    string account;
    string name;
    string department;
    string jobtitle;
public:
    Employee(){}
    Employee(string ac, string name, string dep, string job):account(ac), name(name), department(dep), jobtitle(job)
    {

    }
    virtual void InputInformation(){}
    virtual void ShowInformation(){
        cout<<"thong tin nhan vien: "<<endl;
        cout<<"\tAccount : "<<account<<endl;
        cout<<"\t Name: "<< name<<endl;
        cout<<"\t department: "<<department<<endl;
        cout<<"\t jobtitle: "<<jobtitle<<endl;

    }
    virtual ~Employee(){}
};
// Task 2: tạo lớp Developer kế thưa lớp Employee tao thêm thuộc tính project, phương thức hàm nhập thông tin , hàm hiển thi thông tin
//hàm displaydailywork để hiển thị tên dự án

class Developer: public Employee
{
    string project;
public :
    Developer()
    {
        jobtitle= "developer";
    }
    Developer(string ac, string name, string dep, string job, string proj):Employee(ac, name, dep, job){
        this->project= proj;
    }
    void InputInformation(){
        cout<<"Nhap tong tin nhan vien:"<<endl;
        cout<<"\tAccount :"; getline(cin,account);
        cout<<"\tName :"; getline(cin,name);
        cout<<"\tdepartment :"; getline(cin,department);
        cout<<"\tjobtitle :"; getline(cin,jobtitle);
        cout<<"\tProject :"; getline(cin,project);

    }
    void ShowInformation(){
    Employee::ShowInformation();
    cout<<"\tProject: "<<project<<endl;
    displayDailyWork();
    }
    void displayDailyWork(){
    cout<<"\t==>Ma hoa trong du an : "<<project<<":"<<name<<endl;
    }
    ~Developer(){}
};
//Task 3 : Viết class manager kế thừa lớp Employee và có thêm thuộc tính tên khách hàng và sau đó thêm các phương thức nhập xuất và displayInformation
class Manager: public Employee
{
    string customername;
public:
    Manager()
    {
        jobtitle= "manager ";
    }
    Manager(string ac, string name, string dep, string job, string cus):Employee(ac, name, dep, job){
        this->customername= cus;
    }
    void InputInformation(){
        cout<<"Nhap tong tin nhan vien:"<<endl;
        cout<<"\tAccount :"; getline(cin,account);
        cout<<"\tName :"; getline(cin,name);
        cout<<"\tdepartment :"; getline(cin,department);
        cout<<"\tjobtitle :"; getline(cin,jobtitle);
        cout<<"\tCustomername :"; getline(cin,customername);

    }
    void ShowInformation(){

    Employee::ShowInformation();
    cout<<"\tCustomername :"<<customername<<endl;
    displayDailyWork();
    }
    void displayDailyWork(){
        cout<<"\t==>Lam viec voi khach hang : "<<customername<<endl;
    }
    ~Manager(){}
};
// Viết hàm managerProject để nhập thông tin 1 quản lí 1 tester 3 nhân vien dev code  sau đó in ra màn hình các thông tin về cả nhóm và giá trị mã hóa
void managerProject(){
    Manager M;
    cout<<"\n\n\t\t=============Nhap thong tin quan li: ===================================="<<endl;
    M.InputInformation();
    cout<<"\n\n\t\t=====================Nhap thong tin cac 3 dev=================================="<<endl;
    Developer* dev= new Developer[3];
    for(int i=0; i<3; i++){
        cout<<"Nhan vien dev "<<i+1<<endl;
        dev[i].InputInformation();
    }
    cout<<"\n\n\t\t==========================Thong tin nguoi kiem tra du an=========================="<<endl;
    Developer test;
    test.InputInformation();
    cout<<"\n\n\t\t================================ DANH SACH TAT CA NHUNG NGUOI TRONG DU AN================================="<<endl;
    cout<<"\n\t Quan li du an "<<endl;
    M.ShowInformation();
    cout<<"\n\t Nhan vien dev du an "<<endl;
    for(int i=0; i< 3; i++){
        cout<<"Nhan vien dev "<<i+1<<endl;
        dev[i].ShowInformation();
    }
    cout<<"\n\t Nhan vien kiem tra du an"<<endl;
    test.ShowInformation();
    cout<<"\n\n\t\t ===============================daily work=========================="<<endl;
    cout<<"Manager :"<<endl;
    M.displayDailyWork();
    cout<<"Developer: "<<endl;
    for(int i=0; i< 3; i++){
        cout<<"Dev "<<i<<": ";
        dev[i].displayDailyWork();
    }
}
int main(){
    managerProject();
return 0;}
