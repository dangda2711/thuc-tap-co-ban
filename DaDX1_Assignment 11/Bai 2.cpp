#include <iostream>
using namespace std;
int main()
{
 int a = 10, b =0 , c;
 try
 {
 if (b == 0)
 {
 throw "Division by zero not possible";
 c = a / b;
 }
 }
 catch (const char* ex)
 {
     cout<<ex;
 }
 return 0;
}
