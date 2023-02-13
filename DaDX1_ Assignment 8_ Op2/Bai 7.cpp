

// =>>>>CHƯƠNG TRINH SẼ IN RA KI TU C VÌ rBase KIỂU LÀ A NHƯNG ĐƯỢC GÁN ĐỊA CHỈ BIẾN KIỂU C
// VÀ HÀM getName trong các lớp cơ sở A và B là hàm ảo nên khi gọi hàm biến rBase sẽ gọi đến hàm getName của class C
class A
{
public:
 virtual const char* getName() { return "A"; }
};

class B: public A
{
public:
 virtual const char* getName() { return "B"; }
};

class C: public B
{
public:
 virtual const char* getName() { return "C"; }
};

class D: public C
{
public:
 virtual const char* getName() { return "D"; }
};
#include<iostream>
using namespace std;
int main()
{
 C c;
 A &rBase = c;
 std::cout << "rBase is a " << rBase.getName() << '\n';

 return 0;
}

