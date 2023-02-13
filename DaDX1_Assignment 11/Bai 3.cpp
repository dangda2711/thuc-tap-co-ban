#include <iostream>
using namespace std;
int main()
{
 int x[3] = { -1,2 };
 for (int i = 0; i < 2; i++)
 {
 int ex = x[i];
 try
 {
 if (x[i]>-2)
 throw ex;
 else
 throw 'ex';
 }
 catch (int a)
 {
 cout << "Special exception\n";
 }
 }
 return 0;
}
